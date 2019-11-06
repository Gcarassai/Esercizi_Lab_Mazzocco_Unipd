#include <iostream>
#include <string>
using namespace std;

// database informazione studenti
// e' meglio definire strutture fuori dalla main

struct studente{
	string nome, cognome;
	long matricola;
	int numero_esami;
	double media_voti;
	};

int main (){

studente a, d, e; int b; double c;
	
	a.nome = "Porco";
	a.cognome = "Dio";
	a.matricola = 1234567;
	a.numero_esami = 23;
	a.media_voti = 28.5;

	d.nome = "Roger";
	d.cognome = "Federer";
	d.matricola = 69420;
	d.numero_esami = 1500;
	d.media_voti = 82.21;

cout << "enter nome di e" << endl;
cin >> e.nome;
cout << "enter cognome di e" << endl;
cin >> e.cognome;

return 0;
}
