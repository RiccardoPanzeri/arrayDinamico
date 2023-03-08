#include <iostream>
#include <ctime>
#include <stdio.h>
#include <cstdlib>
#include "prototipi.h"
using namespace std;

int main()
{
	srand(time(0));
	int dim = 0; //dimensione che verrà modificata dall'utente;
	bool restart;//variabile booleana che permette di ripetere l'operazione;
	char risposta = '/'; //variabile che conterrà la risposta dell'utente sul riavvio dell'operazione al termine del programma;
	do {
		int* array;//dichiaro il puntatore non inizializzato;
		cout << "Inserisci il numero di elementi che dovrà contenere l'array: " << endl;//chiedo la dimensione dell'array all'utente
		cin >> dim;//input dell'utente;
		array = new int[dim];//assegno l'indirizzo preso dall'heap tramite la keyword ''new'', in modo che di volta in volta, all'array possa essere assegnata la dimensione ricevuta tramite l'input dell'utente;
		//carico l'array con valori casuali;
		caricaArray(array, dim);
		//stampo ivalori contenuti nell'array;
		cout << "Stampo i valori contenuti nell'array:" << endl;
		visualizzaArray(array, dim);
		delete []array;
		cout << "Vuoi ripetere l'operazione? (y- si, qualunque altro tasto per chiudere il programma)" << endl;
		cin >> risposta;
		if (risposta == 'y') {
			restart = true;
		}
		else {
			restart = false;
		}
	} while (restart);









	return 0;
}


