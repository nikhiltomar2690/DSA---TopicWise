#include<bits/stdc++.h>
using namespace std;

int main(){

int n =14;
int count =0;
while(n>0){
    if(n%2==0){
        count++;
        n=n/2;
        
    }
    else{
        count++;
        n=n-1;
        
    }
}
cout<<count;

return 0;
}