#include <iostream>
using namespace std;

int main(){

int i,error;

do{

cout<<"inserire numero >0: ";
cin >> i;
if (error = (i>=0)) { // se i positivo -> error = 1, se i negativo -> error = 0,
	cout << "numero non valido" << endl;
	cout << error << endl;
	}

}while(error);

// se error == 0 (false) allora usciamo dal ciclo. 
// se error == 1 (true) allora ripetiamo il ciclo. 

// NB exit condition

return 0;
}
