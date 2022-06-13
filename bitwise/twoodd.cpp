#include<bits/stdc++.h>
using namespace std;

int main(){

// int arr[] = {3,1,1,2,5,2,3,4,7,4};
// int len = sizeof(arr)/sizeof(arr[0]);
// cout<<len;

//brute force o(n^2)
// for(int i=0;i<len;i++){
//     int count =0;
//     for(int j=0;j<len;j++){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//     }
//     if(count==1){
//         cout<<arr[i]<<endl;
//     }
// }

// bitwise approach

int arr[]= {3,4,3,4,5,4,4,6,7,7};
int len = sizeof(arr)/sizeof(arr[0]);

int x= 0;
int xor1=0;
int xor2 =0;

for(int i=0;i<len;i++){
    x^=arr[i];
}

int count = x&(~(x-1));

for(int i=0;i<len;i++){
    int mask = 1<<count;
    if(arr[i]&mask){
        xor1  =xor1 ^ arr[i];
    }
    else{
        xor2 = xor2 ^ arr[i];
    }
}

cout<<xor1<<endl<<xor2;


return 0;
}