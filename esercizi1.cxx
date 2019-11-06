# include <iostream>
using namespace std;

int main () {

/* BMW

double peso, altezza;

cout << "enter weight";
cin >> peso;
cout << "enter height";
cin >> altezza;
cout << "your BMW is:" << peso/(altezza*altezza);
*/

/*convertitore C e F */

int conv = 0;
double temp = 0;

cout << "inserire conversione: 1 per C --> F, 2 per F--> C" << endl; 

cin >> conv;

cout << "inserire temperatura" << endl;

cin >> temp;

if (conv == 1) {
	cout << temp << "C = " << 32+9*temp/5 << "F" << endl;
} else if (conv == 2) {
	cout << temp << "F = " << 5*(temp-32)/9 << "C" << endl;
}

return 0;
}

