#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> str{1,3,2};
int n = str.size();
// cout<<n;
vector<int> v;
int s = pow(2,n);
// cout<<0;
// cout<<"There are "<<s<<" subsets possible\n";
for(int i=0;i<s;i++){
    int x=0;
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
            // cout<<str[j];
            x=x^str[j];
            v.push_back(x);
        }
         
    }
     cout<<x;
    cout<<" ";
}
int res=0;
for(int i=0;i<v.size();i++){
res=res^v[i];
}
cout<<endl<<res;
return 0;
}