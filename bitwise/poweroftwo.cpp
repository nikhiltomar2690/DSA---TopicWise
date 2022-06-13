#include<bits/stdc++.h>
using namespace std;

int main(){

int n=77;

// O(n) approach
// int count =0;
// while(n>0){
//     n=n&(n-1);
//     count++;
// }

// if(count==1){
// cout<<"Power of two";
// }
// else{
//     cout<<"Not a power of two";
// }

// O(1) approach

if(n&(n-1)==0){
    cout<<"Power of two";
}
else {
    cout<<"Not a power of two";
}
return 0;
}