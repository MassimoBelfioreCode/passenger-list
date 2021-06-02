#include <iostream>
#include <string>
#include "ListaDiPasseggeri.h"

using namespace std;

LL::~LL(){
		Nodo *curr = this->head;
			while(curr!=nullptr){
				Nodo *aux = curr->next;
				delete curr;
				curr = aux;
			}
}
			
			
LL::void inserisci(Passeggero val){
			if(!head){
				Nodo *primo = new Nodo(val);
				primo->next = head;
				head = primo;
				tail = head;
				n++;
			}
			else{
				Nodo *nuovo = new Nodo(val);
				nuovo->next = head;
				head = nuovo;
				n++;
			}
	}
			
			
	void elimina(Passeggero val){
		if(head==nullptr){
			cout <<"Lista di passeggeri vuota, impossibile cancellare un passeggero"<<endl;
			cout <<"Passenger list empty, unable to cancel a passenger"<<endl;
			cout <<"Lista de pasajeros vacía, no se puede cancelar un pasajero"
				return;
			}
		else if(this->head->valore == val){
			Nodo *tmp = this->head;
			this->head = head->next;
			delete tmp;
			n--;
		}
		else{
			Nodo *current, *prev;
			current = this->head; prev = nullptr;
			while(current != nullptr&& current->valore!=val){
				prev = current;
				current = current->next;
				}
				if(current!=nullptr){
					prev->next = current->next;
					delete current;
					n--;
				}
				else{
					cout <<"Errore, passeggero non trovato nella lista di passeggeri"<<endl;
					cout <<"Error, passenger not found in the passenger list"<<endl;
					cout <<"Error, pasajero no encontrado en la lista de pasajeros"<<endl;
				} 
			}
	}
	
	

ostream& operator(ostream& out, const LL& d){
	Nodo *iter = d.head;
	while(iter!=nullptr){
		out << iter->valore <<"-->";
		iter = iter->next;
	}
	out <<"NIL"<<endl;
	return out;
}
