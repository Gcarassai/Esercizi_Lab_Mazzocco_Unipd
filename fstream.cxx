#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){

ofstream fout("outputfile.txt");
	if (!fout){                      // verifica che il puntatore non sia nullo
		return 1;
	}

int a=2,b=3,c=5;
fout << a << endl;
fout << b << endl;
fout << c << endl;
fout << a << endl;

string testo2;
cin >> testo2;
fout << testo2;

//altri modi di inizializzare
string filename = "output.txt";
ifstream fin2(filename);
	if (!fin2){                      // verifica che il puntatore non sia nullo
		return 1;
	}

fin2 >> a >> b;

//media
double dato;
vector<double> periodo;
for (auto c : periodo){
	cin >> dato;
	push_back

ofstream fout3("datimedia.txt");
	if (!fout3){                      
		return 1;
	}

booooo



return 0;
}
