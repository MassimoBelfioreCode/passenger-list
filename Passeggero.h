#include <iostream>
#include <string>
using namespace std;

class Passeggero{
	private:
		string nome, cognome, num_passaporto;
		int giorno_di_nascita, mese_di_nascita;
		int anno_di_nascita;
		
		public:
			Passeggero();
			Passeggero(string, string, string, int , int, int);
			//metodi get e set
			string getNome(){ return nome;}
			string getCognome(){ return cognome;}
			string getNum_passaporto(){ return num_passaporto;}
			int getGiorno_Di_Nascita(){ return giorno_di_nascita;}
			int getMese_Di_Nascita(){ return mese_di_nascita;}
			int getAnno_Di_Nascita(){ return anno_di_nascita;}
			void setNome(string nm){ this->nome = nm;}
			void setCognome(string cm){ this->cognome = cm;}
			void setNum_passaporto(string np){ this->num_passaporto = np;}
			void setGiorno_Di_Nascita(int gg){ this->giorno_di_nascita = gg;}
			void setMese_Di_Nascita(int ms){ this->mese_di_nascita = ms;}
			void setAnno_Di_Nascita(int an){ this->anno_di_nascita = an;}
			
			friend ifstream& operator>>(ostream& is, Passeggero& p);
};
