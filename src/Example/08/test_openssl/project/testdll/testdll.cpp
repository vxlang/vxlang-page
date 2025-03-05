#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdint.h>

#include <iostream>
#include <thread>
#include <vector>
#include <cstring>

#include <openssl/evp.h>
#include <openssl/rand.h>

//

#define USE_VL_MACRO
#include "../../../../../vxlang/sdk/include/vxlib.h"

#ifndef _WIN64
#pragma comment(lib, "../../../../../vxlang/sdk/lib/vxlib32.lib")
#else
#pragma comment(lib, "../../../../../vxlang/sdk/lib/vxlib64.lib")
#endif

//

#pragma comment(lib, "libssl_static.lib")
#pragma comment(lib, "libcrypto_static.lib")
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "crypt32.lib")

//

std::vector<uint8_t> encrypt(const std::string& plaintext, const uint8_t* key, const uint8_t* iv);
std::string decrypt(const std::vector<uint8_t>& ciphertext, const uint8_t* key, const uint8_t* iv);

//

void cmd() {
    if (AllocConsole()) {
        freopen("CONOUT$", "w", stdout);
    }

    return;
}

#pragma optimize("", off) 
void test() {
    VL_DUAL_MODE_BEGIN;

    do {
        unsigned char key[32];
        unsigned char iv[16];

        if (!RAND_bytes(key, sizeof(key))) { break; }
        if (!RAND_bytes(iv, sizeof(iv))) { break; }

        std::string plaintext = "This is a test message.";

        printf("Original plaintext: \n");

        std::vector<unsigned char> ciphertext = encrypt(plaintext, key, iv);

        printf("Ciphertext (hex):");
        for (unsigned char c : ciphertext) {
            printf("%02x", c);
        }
        printf("\n");

        //

        std::string decryptedtext = decrypt(ciphertext, key, iv);

        printf("Decrypted plaintext: %s \n", decryptedtext.c_str());

    } while (false);

    VL_DUAL_MODE_END;

    return;
}

#pragma optimize("", off) 
DWORD WINAPI ThreadFunc(LPVOID lpParam) {
    VL_DUAL_MODE_BEGIN;

    HMODULE hModule = (HMODULE)lpParam;

    cmd();
    test();

    Sleep(3000);
    FreeLibraryAndExitThread(hModule, 0);

    VL_DUAL_MODE_END;

    return 0;
}

#pragma optimize("", off) 
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    VL_DUAL_MODE_BEGIN;

    if (fdwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hinstDLL);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ThreadFunc, hinstDLL, 0, 0);
    }
    else if (fdwReason == DLL_PROCESS_DETACH) {
        MessageBoxW(nullptr, L"unload ..", L"", MB_OK);
    }

    VL_DUAL_MODE_END;

    return TRUE;
}

//

#pragma optimize("", off) 
std::vector<uint8_t> encrypt(const std::string& plaintext, const uint8_t* key, const uint8_t* iv) {
    VL_DUAL_MODE_BEGIN;

    int32_t len = 0;
    int32_t ciphertext_len = 0;
    EVP_CIPHER_CTX* ctx = nullptr;
    std::vector<uint8_t> result;

    do {
        ctx = EVP_CIPHER_CTX_new();

        if (!ctx) { break; }

        if (1 != EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), nullptr, key, iv)) { break; }

        std::vector<uint8_t> ciphertext(plaintext.size() + EVP_CIPHER_block_size(EVP_aes_256_cbc()));

        if (1 != EVP_EncryptUpdate(ctx, ciphertext.data(), &len, reinterpret_cast<const uint8_t*>(plaintext.c_str()), plaintext.size())) { break; }

        ciphertext_len = len;

        if (1 != EVP_EncryptFinal_ex(ctx, ciphertext.data() + len, &len)) { break; }

        ciphertext_len += len;
        ciphertext.resize(ciphertext_len);

        result = ciphertext;

    } while (false);

    if (ctx) {
        EVP_CIPHER_CTX_free(ctx);
    }

    VL_DUAL_MODE_END;

    return result;
}

#pragma optimize("", off) 
std::string decrypt(const std::vector<uint8_t>& ciphertext, const uint8_t* key, const uint8_t* iv) {
    VL_DUAL_MODE_BEGIN;

    int32_t len = 0;
    int32_t plaintext_len = 0;
    std::vector<uint8_t> plaintext;
    EVP_CIPHER_CTX* ctx = nullptr;

    do {
        ctx = EVP_CIPHER_CTX_new();

        if (nullptr == ctx) { break; }

        if (1 != EVP_DecryptInit_ex(ctx, EVP_aes_256_cbc(), nullptr, key, iv)) { break; }

        plaintext.resize(ciphertext.size());

        if (1 != EVP_DecryptUpdate(ctx, plaintext.data(), &len, ciphertext.data(), ciphertext.size())) { break; }

        plaintext_len = len;

        if (1 != EVP_DecryptFinal_ex(ctx, plaintext.data() + len, &len)) { break; }

        plaintext_len += len;
        plaintext.resize(plaintext_len);

    } while (false);

    if (ctx) {
        EVP_CIPHER_CTX_free(ctx);
    }

    VL_DUAL_MODE_END;

    return std::string(plaintext.begin(), plaintext.end());
}


