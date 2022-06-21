#include<bits/stdc++.h>
using namespace std;

int main(){

int n=332;
int count=1;
int res=1;
for(int i=0;i<=32;i++){
if((n&(1<<i)==1) == (n&(1<<(i+1))==1)){
    count++;
}
else{
    count=0;
}
}

cout<<count;
return 0;
}