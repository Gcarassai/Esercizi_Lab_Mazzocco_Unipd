#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

vector<int> v={0,1,2,33,43, 43, 49};
auto itbegin = v.begin();
auto itend = v.end();

if (itbegin==itend)
	cout << "vettore vuoto"<<endl;
else
	cout << "vettore non vuoto"<<endl;

*itbegin = 43; //modifichiamo il primo

cout << *itbegin << endl; //dereference

v.push_back(56);

for (auto c: v)
	cout<<c<<endl;

v.pop_back();

*itbegin = 43; //modifichiamo il primo

for (auto c: v)
	cout<<c<<endl;

int dim =itbegin -  itend;

cout << dim << endl;

// stimare il massimo
int max = v[0];

for (auto c: v) {
	if(c>max)
	max = c;
}

cout << "max is "<< max << endl;

//find
auto element = find(v.begin(),v.end(),43);
cout <<"find" << endl << element-v.begin();

return 0;
}
