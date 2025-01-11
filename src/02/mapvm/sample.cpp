#include <stdio.h>
#include <stdint.h>
#include <intrin.h>

//

void SEHVm() {
	__try {
		for (int i = 0; i < 10; ++i) {
			printf("SEHVm Test \n");

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

void SEHDual() {
	__try {
		for (int i = 0; i < 10; ++i) {
			printf("SEHDual Test \n");

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

void Vm() {
	for (int i = 0; i < 10; ++i) {
		printf("Hello, Vm! \n");
	}

	return;
}

void Dual() {
	for (int i = 0; i < 10; ++i) {
		printf("Hello, Dual! \n");
	}

	return;
}

int main() {
	SEHVm();
	SEHDual();

	Vm();
	Dual();

	return 1;
}

