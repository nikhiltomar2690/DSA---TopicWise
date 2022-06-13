#include<bits/stdc++.h>
using namespace std;

int main(){

int n =101;
int mask = 1<<5;

if((n&mask)!=0){
    n=n^mask;
    cout<<n;
}
else{
    cout<<"Already bit 0 ";
}

return 0;
}