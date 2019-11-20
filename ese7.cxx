#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){

vector<double> voti;
double voto;
int i=0, c=0;

while(cin >> voto){
	voti.push_back(voto);
	i=i+1;
}


ofstream fout1 ("voti.txt");
	if(!fout1){
		return 1;
	}

while (c<i){
	fout1<<voti[c]<< endl;
	c=c+1;
}



return 0;
}

