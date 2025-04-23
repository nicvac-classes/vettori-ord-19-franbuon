#include <iostream>
using namespace std;

int main() {
   int N, i, j, dimY;
   cout<<"Quanti numeri vuoi inserire?"<<endl;
   cin>>N;
   int x[N];
   i=0;
   while(i<=N-1)
   {
    cout<<"Che numero vuoi inserire?"<<endl;
    cin>>x[i];
    i=i+1;
   }
   int y[N];
   dimY=0;
   bool trovato;
   i=0;
   while(i<=N-1)
   {
    trovato=false;
    j=0;
    while(j<=dimY and not(trovato))
    {
        if(x[i]=y[i])
        {
            trovato=true;
        }
        j=j+1;
    }
    if(not(trovato))
    {
        y[dimY]=x[i];
        dimY=dimY+1;
    }
    i=i+1;
   }
   int t;
   i=0;
   while(i<=dimY-1)
   {
    j=0;
    while(j<=(dimY-2)-i)
    {
        if(y[j]=y[j+1])
        {
            t=y[j];
            y[j]=y[j+1];
            y[j+1]=t;
        }
        j=j+1;
    }
    i=i+1;
   }
   i=0;
   while(i<=dimY-1)
   {
    cout<<"Il "<<i+1<<"° numero del vettore y è "<<y[i]<<endl;
    i=i+1;
   }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
