#include<bits/stdc++.h>
using namespace std;

int main(){

int n=77;
int count =0;
while(n>0){
    n=n&(n-1);
    count++;
}

cout<<count<<" "<<"no of set bits";


return 0;
}