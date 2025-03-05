#include <stdio.h>
#include <stdint.h>
#include <intrin.h>

//

void SEHObf() {
	__try {
		for (int i = 0; i < 10; ++i) {
			printf("SEHObf Test \n");

			if (i == 5) {
				__debugbreak();
			}
		}
	}
	__except (1) {
		printf("Except ! \n");
	}

	return;
}

void SEHFla() {
	__try {
		for (int i = 0; i < 10; ++i) {
			printf("SEHFla Test \n");

			if (i == 5) {
				__debugbreak();
			}
		}
	}
	__except (1) {
		printf("Except ! \n");
	}

	return;
}

void Obf() {
	for (int i = 0; i < 10; ++i) {
		printf("Hello, Obf! \n");
	}

	return;
}

void Fla() {
	for (int i = 0; i < 10; ++i) {
		printf("Hello, Fla! \n");
	}

	return;
}

int main() {
	SEHObf();
	SEHFla();

	Obf();
	Fla();

    return 1;
}

