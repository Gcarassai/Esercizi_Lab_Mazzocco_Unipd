#include <iostream>
using namespace std;
//commento

int main()
{
cout << "inserire due numeri interi";
cout << std::endl;
//prima di usare cin bisogna specificar dove nella memoria verranno salvate le variabili
int v1, v2; //crea due spazi di memoria per numeri interi chiamati v1 e v2
cin >> v1 >> v2;
cout << v1 <<"+" << v2 << ""="" << v1+v2 << endl;

//puntatori 
cout << "nella memoria v1 e' qui:" << &v1;

return 0;
}
