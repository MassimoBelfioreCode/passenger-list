#include <iostream>
#include <string>
#include "Passeggero.h"

using namespace std;

Passeggero::Passeggero(){
	nome ="";
	cognome ="";
	num_passaporto ="";
	giorno_di_nascita = 0;
	mese_di_nascita = 0;
	anno_di_nascita = 0;
}

//costruttore lista di inizializzazione
Passeggero::Passeggero(string n, string c, string p, int g, int m, int a): nome(n), cognome(c),
						num_passaporto(p), giorno_di_nascita(g), mese_di_nascita(m), anno_di_nascita(a){}

