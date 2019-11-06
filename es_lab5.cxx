#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {

/*fibonacci

int dim;

cin >> dim;

vector<double> fibonacci(dim);

int i=2;

fibonacci[0]=0;
fibonacci[1]=1;


while (i<dim){
fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
cout << fibonacci[i]/fibonacci[i-1] << endl;
i=1+i;
}

for (auto &c : fibonacci){
	cout << c << << endl;
}
*/

/*database

struct dati_studente {
string nome;
string cognome;
vector<int> voti;
double media;
};

int tot_studenti = 0;
cout << "enter tot num of students" << endl;
cin >> tot_studenti;

vector<dati_studente> database(tot_studenti);

int i=0;


while (i < tot_studenti) {
//nome
string a;
cout << "enter name" << endl;
cin >> a;

//cognome
string b;
cout << "enter last name" << endl;
cin >> b;

//voti
int num_voti;
cout << "enter numero di voti" << endl;
cin >> num_voti;
vector<int> c (num_voti);
int cont;
while (cont < num_voti){
cout << "enter voto " << cont +1 << endl;
cin >> c[cont];
cont = cont + 1;
}
cont=0;

//media
double d =0;
double somma = 0;
int cont1 = 0;
while ( cont1<num_voti) {
somma = somma + c[cont1];
cont1= cont1 +1;
}
cont1=0;
d= somma/num_voti;
cout << "media" << a << b << d << endl;

database[i] = {a,b,c,d};

i=1+i;

}
*/

/*Nepero

int cifre = 0;
cout<< "enter n"<< endl;
cin>>cifre;

double b1 = (1+1./cifre);

double nep = pow(b1,cifre);
cout << nep << endl;

double b2 = (1+1./100000);

double e = pow(b2,100000);

double err = (e-nep)/e;
cout << "errore del " << err <<"%"<<endl;
*/

/*voti*/

cout << "enter n grades" << endl;
int n=0;
cin >> n;

vector<double> voti(n);

int i=0;

while (i<n){

	cout << "enter voto " << i+1<<endl;
	cin>> voti[i];
	i=i+1;

}

auto min = voti[0];
auto max = voti[0];
double somma = 0;

for (auto c : voti) {
	if (c<min)
		min = c;
	if (c>max)
		max = c;
	somma = somma +c;

}
double media = somma/n; 

cout << "max: " << max <<", min: "<< min <<", ave: "<<media<<endl;

return 0;
}








































