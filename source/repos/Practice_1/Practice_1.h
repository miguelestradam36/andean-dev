// Practice_1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

int* range(int b, int e, int i) {
	int* numeros_en_rango = new int[((e - b) / i) + 1];
	int index = 0;
	int valor = b;
	for (int c = 0; c <= (((e - b) / i) + 1); c++) {
		numeros_en_rango[c] = valor;
		valor = valor + i;
	}
	for (int c = 0; c < (((e - b) / i) + 1); c++) {
		std::cout << numeros_en_rango[c] << std::endl;
	}
	return numeros_en_rango;
}

int* reverse(int A[], int n) {
	int* numeros_en_reversa = new int[n];
	for (int c = 0; c <= n; c++) {
		numeros_en_reversa[(n-c)] = A[c];
	}
	std::cout << "\n" << std::endl;
	for (int c = 0; c < n; c++) {
		std::cout << numeros_en_reversa[c+1] << std::endl;
	}
	return numeros_en_reversa;
}

// TODO: Reference additional headers your program requires here.
