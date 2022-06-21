#include<bits/stdc++.h>
using namespace std;

int main(){

// int m=34,n=7;
// if(n==m){
//     cout<<"0";
// }
//     int diff=0;
//     for(int i=0;i<m;i++){
//     if((m&(1<<i)) != (n&(1<<i))){
//            diff++; 
//     }
// }
// cout<<diff;

int diff =0;

int m =34,n=7;
int x =m^n;
while(x>0){
    diff++;
    x=x&(x-1);
}
cout<<diff;
return 0;
}