#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}


void stat(const double a[],int b,double c[]){
    double d,f,g,h=1;
    double k=a[0],j=a[0];
    for(int i=0;i<b;i++) d +=a[i];
    c[0]=d/b;
    for(int i=0;i<b;i++) f +=pow(a[i]-c[0],2);
    c[1]=sqrt(f/b);
    for(int i=0;i<b;i++) g +=1/a[i];
    c[3]=b/g;
    for(int i=0;i<b;i++) h *=a[i];
    c[2]=pow(h,(1.0/b));
    for(int i=1;i<b;i++){
        if(k<a[i]) k=a[i];
        if(j>a[i]) j=a[i];
    }
    c[4]=k;
    c[5]=j;
}