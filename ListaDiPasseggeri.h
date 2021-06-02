#include <iostream>
#include<string>
#include "Passeggero.h"
#include "Passeggero.cpp"

using namespace std;

class Nodo{
	public:
		Nodo *next;
		Passeggero valore;
		
		Nodo(Passeggero value){
			this->next = nullptr;
			this->valore = value;
		}
};


class LL{
	private:
		Nodo *head;
		Nodo *tail;
		int n; //numero di passeggeri inseriti
		
		public:
			LL(){ this->head = nullptr; this->tail = nullptr; n = 0;}
			Nodo* getHead(){ return head;}
			Nodo* getTail(){ return tail;}
			
			~LL(){};
			
			
			void inserisci(Passeggero);
			void elimina(Passeggero);
				
			friend ostream& operator<<(ostream& out, const LL& d);
			
};
