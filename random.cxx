#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

int main() {

default_random_engine e; //generatore di numeri random
uniform_int_distribution<unsigned> u(0,9); //numeri interi
uniform_real_distribution<double> w(0,9); // numeri reali, double o float o non scrivere nulla
normal_distribution<> norm(24,2); // normal distribution (valor medio,dv std)

vector<double> esito;

for (int i = 0; i<40 ; i++) {
	//cout << u(e) << endl;
	//cout << w(e) << endl;
	//cout << norm(e) << endl;
	auto voto = lround(norm(e)); //lround arrotonda
	//cout <<voto << endl;
	esito.push_back(voto);

}

//istogramma
vector<int> frequenze(13,0); //scorrere esito e verificare in che intervallo c'e' un voto

for(auto c: esito){
	for (int i = 0; i<13; i++){
//		if((18+i < c) && (c <= 19+i)){
		if(18+i == c){
			frequenze[i]++;
		}
	}

}

double assex = 18.5; // valor medio prima classe di frequenza

for (auto d: frequenze){
//	cout << assex << "\t" << d << endl;
	cout << assex << "\t" << string(d,'*') << endl;
	assex++;
}

// cout << e.min() << endl; // il numero minimo che puo' uscire da e
// cout << e.max() << endl; // il numero massimo che puo' uscire da e

return 0;
}

