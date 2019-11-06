#include <iostream>
using namespace std;

int main () {

int a = 10, b=2;

// reference

// cout << a << endl << "\t&a = " << endl << b << endl << &b << endl;

// int &r = a;

//r = b;

//cout << r << endl << &r << endl;

//cout << "dio pisello" << endl << &r << endl;

// pointer

int *pa = &a, *pb = &b;
cout << pa << endl << pb << endl;

cin >> a >> b;

cout << pa << endl << pb << endl;

//while (a>0) { cout << "dio cane" << endl;}

return 0;
}
