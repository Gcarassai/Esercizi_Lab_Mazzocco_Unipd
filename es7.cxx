#include <iostream>
#include <vector>
using namespace std;

int main() {

int i = 0;
vector<int> voti;

while (cin>>i){
	voti.push_back(i);
}

vector<int> frequenze(13,0);

for (auto c:voti){
	for (int d =0;d<13;d++){
		if (18+d == c){
			frequenze[i]++;
		}
	d++;
	}
}

double assex =18;

for (auto f: frequenze){
	cout << assex << "\t" << frequenze[f] << endl;
	assex++;
}

return 0;
}
