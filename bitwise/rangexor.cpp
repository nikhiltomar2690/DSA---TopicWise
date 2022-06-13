#include<bits/stdc++.h>
using namespace std;

int main(){

int l,r;
cin>>r;
cout<<endl;
cin>>l;

int b=l-1;
int xor1 =0;
int xor2=0;
 
    if(r%4==0){
    cout<<endl<<r;
    xor1 =r;
    
    
}
else if(r%4==1){
    cout<<endl<<1;
    xor1 =1;
}
else if(r%4==2){
    cout<<endl<<r+1;
    xor1 =r+1;
}
else{
    cout<<endl<<0;
    xor1 =0;
}


    if(b%4==0){
    cout<<endl<<b;
    xor2 =b;
    
}
else if(b%4==1){
    cout<<endl<<1;
    xor2 =1;
}
else if(b%4==2){
    cout<<endl<<b+1;
    xor2 =b+1;
}
else{
    cout<<endl<<0;
    xor2 =0;
}


int res= xor1^xor2;
cout<<res;

return 0;
}