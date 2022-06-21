#include<bits/stdc++.h>
using namespace std;

int main(){

int n=11;
for(int i=0;i<=32;i++){
    if(n&(1<<i) == n&(1<<(i+1))){
            cout<<0;
            break;
    }
    
}

return 0;
}