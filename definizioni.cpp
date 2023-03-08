#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#include "prototipi.h"
using namespace std;



void caricaArray(int vet[], int dim) {
	for (int i = 0; i < dim; i++) {
		vet[i] = rand() % 101;
	}
}

void visualizzaArray(int vet[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << vet[i] << endl;
	}

}
