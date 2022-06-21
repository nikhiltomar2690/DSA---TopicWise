#include<bits/stdc++.h>
using namespace std;

int main(){

string str = "abc";
int n = str.size();
// cout<<n;
int s = pow(2,n);
cout<<"There are "<<s<<" subsets possible\n";
for(int i=0;i<s;i++){
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
            cout<<str[j];
        }
    
    }
    cout<<" ";
}

return 0;
}