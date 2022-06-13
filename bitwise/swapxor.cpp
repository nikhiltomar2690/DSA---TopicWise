#include<bits/stdc++.h>
using namespace std;

int main(){

int a;
cin>>a;
int b;
cin>>b;

cout<<"Before swapping values are\n";
cout<<a<<endl<<b<<endl;
a=a^b;
b=a^b;
a=a^b;

cout<<"After swapping"<<endl;
cout<<a<<endl<<b;
return 0;
}