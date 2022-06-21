#include<bits/stdc++.h>
using namespace std;

int main(){

// vector<int>v{4, 2, 4, 5, 2, 3, 3, 1};
// int res =0;
//         int x1=0;
//         int x2=0;
//         for(int i=0;i<v.size();i++){
//             res=res^v[i];
//         }
//         cout<<res<<endl;
        
//         int x= res&(~(res-1));
//         cout<<x<<endl;
//       for(int i=0;i<v.size();i++){
       
//         if(v[i]&x){
//             x1=x1^v[i];
//         }
//         else{
//             x2=x2^v[i];
//         }
//       }
//       cout<<x1<<endl<<x2;
      int l=11;
      int r=19;
      int count=0;
    int res=0;
        for(int i=l;i<=r;i++){
            while(i>0){
                count++;
                i=i&(i-1);
            }
            if(count==3){
                res++;
            }
        }
        cout<<res;
      return 0;
}