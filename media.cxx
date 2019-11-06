#include<iostream>
#include<cmath>
using namespace std;

/*
int main() {

double n1,n2,m,c=2;

while (c>0){
if (c==2){
	cout << "enter n1"<< endl;
	cin >> n1;
	cout << "enter n2"<< endl;
	cin >> n2;
	m = (n1 + n2)/c;
	cout << "enter m = " << m << endl;
	c= c+1;
}else if (c>2){
	cout << "enter n("<< c << ")" << endl;
	cin >> n1;
	m = (m*c+n1)/(c+1);
	cout << "enter m = " << m << endl;
	c= c+1;
}}
return 0;
}*/

// con array

int main() {

int numero;

cout << "enter n. di dati di cui vuoi prendere la media" << endl; 
cin >> numero;

double dati[numero];

int i = 0;
double somma = 0;

while (i < numero) {

cout << "enter dato" << i+1 << endl;

cin >> dati[i];

somma = somma + dati[i];

i=i+1;

}

cout << "la media e' " << somma/numero << endl;

return 0;
}
