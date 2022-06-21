#include<bits/stdc++.h>
using namespace std;

int main(){

int n=3365;
int res = n & (~(n-1));
int r=0;
for(int i=0;i<33;i++){
    if(n&(1<<i)){
        r=i;
        break;
    }
}
cout<<r;
return 0;
}