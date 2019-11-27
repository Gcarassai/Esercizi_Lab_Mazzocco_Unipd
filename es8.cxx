#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <random>
#include <vector>
using namespace std;

//n complessi

/*
struct complex {
	double re;
	double im;
}

complex sommac(complex n, complex m);
complex productc(complex n, complex m);
double moduloc(complex n);
double fasec(complex n){

int main(){



	return 0;
}

complex sommac(complex n, complex m){

	complex ris;

	ris.re = n.re + m.re;
	ris.im = n.im + m.im;

	return ris;
}

complex productc(complex n, complex m){

	complex ris;

	ris.re = n.re * m.re - n.im * m.im;
	ris.im = n.im * m.re + n.re * m.im;

	return ris;
}

double moduloc(complex n){
	double ris;
	ris = sqrt(n.re^2+n.im^2);
	return ris;
}

double fasec(complex n){
	double ris;
	ris = atan(n.im/n.re);
	return ris;
}
*/

//Generazione di Numeri Casuali e Scrittura su File.

double media (vector<double> dati, int indice_iniziale, int indice_finale);
double dvstd (vector<double> dati, double media, int index_i, int index_f);

int main(){
 
cout << "enter numeri casuali generare" <<endl;
int valn;
cin >> valn;

cout << "enter valore medio" <<endl;
double valmd;
cin >> valmd;

cout << "enter deviazione standard" <<endl;
double devstd;
cin >> devstd;

cout << "enter nome file di testo (.txt)" <<endl;
string nomefile;
cin >> nomefile;

normal_distribution<double> norm(valmd,devstd);
default_random_engine rand;

ofstream fout1(nomefile);
	if(!fout1){
	return 1;
	}
int i=0;
double w;
while (i<valn){
	w = norm(rand);
	fout1 << w << endl;
	i=i+1;
} 


//Lettura da File, Calcolo di Media e Deviazione Standard

cout << "seconda parte" << endl;
cout << "enter file da leggere  (" << nomefile << ")" << endl;
string nomefile2;
cin >> nomefile2;

ifstream fin1(nomefile2);
	if(!fin1){
	return 1;
	}

double a;
vector<double> dati;
i=0;

while(fin1>>a){
	dati.push_back(a);
	i=i+1;
}
double d14 = dati.size()/4, d24=dati.size()/2, d34=dati.size()*3/4;
double med = media(dati, 0, dati.size());
double med14 = media(dati, 0, d14);
double med24 = media(dati, d14, d24);
double med34 = media(dati, d24, d34);
double med44 = media(dati, d34, dati.size());
cout << med<< endl<<med14<<endl<<med24<<endl<<med34<<endl<<med44<<endl;

double dvdv = dvstd (dati, med, 0,dati.size());
cout<<dvdv<<endl; 

return 0;
}

double media (vector<double> vec, int indice_iniziale, int indice_finale){

double media, somma=0.;
int i=indice_iniziale;

while (i<indice_finale){
	somma=somma+vec[i];
i=i+1;	}
media=somma/(indice_finale+1);

return media;
}


double dvstd (vector<double> vec, double media, int index_i, int index_f){
double scarto;
int i=index_i;

while (i<index_f){
	scarto=scarto+(media-vec[i])*(media-vec[i]);
i=i+1;
	}
double dvstd;
dvstd=sqrt(scarto/(index_f));

return dvstd;
}







