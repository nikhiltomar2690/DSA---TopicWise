#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"Enter value of n"<<endl;
cin>>n;

if(n%4==0){
    cout<<n;
}
else if(n%4==1){
    cout<<1;
}
else if(n%4==2){
    cout<<n+1;
}
else{
    cout<<0;
}

return 0;
}