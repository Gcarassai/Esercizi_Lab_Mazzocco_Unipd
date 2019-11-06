#include<iostream>
#include<cmath>
using namespace std;

//struct complex{
	//double re;
	//double im;
	//};

//int main () {

/* calcolare modulo e fase di z1 */

//complex z1, z2;

//cout << "enter re z1" << endl;
//cin >> z1.re;
//cout << "enter im z1" << endl;
//cin >> z1.im;

//cout << "enter re z2" << endl;
//cin >> z2.re;
//cout << "enter im z2" << endl;
//cin >> z2.im;

/* calcolare modulo e fase di z1 

cout << "|" << z1.re << "+" << z1.im << "i| = " << sqrt(z1.re*z1.re + z1.im*z1.im) << endl;
cout << "fase di" << z1.re << "+" << z1.im << "i = " << atan(z1.im/z1.re) << "rad" << endl; */

/* calcolare z1+z2 e z1*z2 

cout << z1.re << "+" << z1.im << "i + " << z2.re << "+" << z2.im << "i =" << z1.re+z2.re << "+" << z1.im+z2.im << "i" << endl;

cout << z1.re << "+" << z1.im << "i * " << z2.re << "+" << z2.im << "i =" << z1.re*z2.re - z1.im*z2.im << "+" << z1.re*z2.im + z1.im*z2.re << "i" << endl;*/

//return 0;
//}

/*risolutore polinomi: ax^2 + bx + c = 0*/

struct polinomio{
	double a;
	double b;
	double c;
};

int main() {

polinomio poli;

cout << "enter a" << endl;
cin >> poli.a;
cout << "enter b" << endl;
cin >> poli.b;
cout << "enter c" << endl;
cin >> poli.c;

double x1, x2;

if (poli.b*poli.b-4*poli.a*poli.c >=0) {
	x1= (-poli.b + sqrt(poli.b*poli.b-4*poli.a*poli.c))/(2*poli.a);
	x2= (-poli.b - sqrt(poli.b*poli.b-4*poli.a*poli.c))/(2*poli.a);
	cout << "x1 = " << x1 << ",x2 = " << x2 << endl;
} else if (poli.b*poli.b-4*poli.a*poli.c < 0) {
	cout << "x1 = " << -poli.b/(2*poli.a) << "+" << (sqrt(-poli.b*poli.b+4*poli.a*poli.c))/(2*poli.a) << "i"<< ", x2 = " << -poli.b/(2*poli.a) << "-" << (sqrt(-poli.b*poli.b+4*poli.a*poli.c))/(2*poli.a) << "i" << endl;
}

return 0;
}
