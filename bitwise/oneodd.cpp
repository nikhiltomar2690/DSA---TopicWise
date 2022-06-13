#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int> v = {2,1,2,5,6,5,7,7,6};
int res=0;
for(int i=0;i<v.size();i++){
 res = res^v[i];
}

cout<<res;

return 0;
}