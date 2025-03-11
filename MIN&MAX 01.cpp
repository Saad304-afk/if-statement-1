#include<iostream>
using namespace std;

int main (){

long long A,B,C,mini,maxi;
cin>>A>>B>>C;

if(A>C&&A>B)
    {maxi=A;}
   else if(B>C)
        {maxi=B;}
   else
    maxi=C;


 if(A>B&&C>B)
    mini=B;
     else if(A>C)
        mini=C;
    else
        mini=A ;

        cout<<mini<<" "<<maxi;}

