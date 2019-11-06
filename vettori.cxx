#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

int dimi;

cin >> dimi;

vector<int> fibonacci(dimi);

int i=2;

//metodo push back
fibonacci[0]=0;
fibonacci[1]=1;

//fibonacci
while (i<dimi){
fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
i=1+i;
}

// metodo for
for (auto &c : fibonacci){
	cout << c << endl;
}

int dimo = fibonacci.size();

cout << dimo << endl;

return 0;
}
