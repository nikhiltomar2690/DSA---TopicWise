#include<bits/stdc++.h>
using namespace std;

int main(){

int m=11,n=13;
if(n==m){
    cout<<"same";
}
int diff=0;
for(int i=0;i<=32;i++){
    if((m&(1<<i)) != (n&(1<<i))){
           diff = i+1; 
           break;
    }
}
cout<<diff;
return 0;
}