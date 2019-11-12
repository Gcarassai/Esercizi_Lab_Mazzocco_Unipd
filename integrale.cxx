#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main() {

//integrale

double inf = 0, sup=0;

cout << "estremo inf" << endl;
cin >> inf;
cout << "estremo sup" << endl;
cin >> sup;

//x
double i=0,n=1000000;
vector<double> vx (n);

while(i<n){
vx[i]=inf+(i/n)*(sup-inf);
i=i+1;
}
i=0;

//y
vector<double> vy (n);
int icomp=0, numf=0;
cout << "enter number of compositions" << endl;
cin >> numf;
string function = "x";
string par = "(";
int fun = 0;
double k = 0;
while(icomp<numf){
    cout << "enter function: 0: k + f(x) | 1: k*f(x) | 2:(f(x))^k | 3:sin(f(x)) | 4:k^(f(x))" << endl;
    cin >> fun;
    if(fun==0){
        cout<<"enter k"<<endl;
        cin>>k;
        function = par + to_string(k) + "+" + function + ")";
        cout<<"current function: f(x) = " << function <<endl;
        while(i<n){
            vy[i]=vx[i]+k;
            i=i+1;
        }
        i=0;
            
    }else if (fun==1){
        cout<<"enter k"<<endl;
        cin>>k;
        function = par + to_string(k) + "*" + function + ")";
        cout<<"current function: f(x) = " << function <<endl;
            while(i<n){
                vy[i]=vx[i]*k;
                i=i+1;
            }
            i=0;
            
    }else if (fun==2){
            cout<<"enter k"<<endl;
            cin>>k;
            function = "(" + function + "^" + to_string(k) + ")";
            cout<<"current function: f(x) = " << function <<endl;
            while(i<n){
                vy[i]=pow(vx[i],k);
                i=i+1;
            }
            i=0;
            
    }else if (fun==3){
            function = "( sin (" + function + ")";
            cout<<"current function: f(x) = " << function <<endl;
            while(i<n){
                vy[i]=sin(vx[i]);
                i=i+1;
            }
            i=0;
            
    }else if (fun==4){
            cout<<"enter k"<<endl;
            cin>>k;
            function = par + to_string(k) + " ^ ( " +function + + ")";
            cout<<"current function: f(x) = " << function <<endl;
            while(i<n){
                vy[i]=pow(k,vx[i]);;
                i=i+1;
            }
            i=0;
        
    }
    icomp=icomp+1;

}

//integrale
double integrale = 0;
while(i<n){
    integrale = integrale + (vy[i]+vy[i-1])*(1/n)*(sup-inf)/2 ;
    i=i+1;
    }
i=0;
cout<< endl << sup << endl << "∫ " << function << " dx = " << integrale << endl << inf << endl << endl;

return 0;
}
