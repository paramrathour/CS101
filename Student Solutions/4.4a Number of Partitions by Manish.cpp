#include <bits/stdc++.h>

using namespace std;

int NOP(int n,int m){
   if (m==1)
     return 1;
   else if (n==m)
     return NOP(n,m-1)+1;
   else if (n<m)
     return NOP(n,n);
   else
     return NOP(n,m-1)+NOP(n-m,m);

}

int main(){
    int t,n,m;
    cin>>t;
    long int ans[t];
    for (int i=0;i<t;i++){
      cin>>n>>m;
      ans[i]=NOP(n,m);
    }
    for (int i=0;i<t;i++)
      cout<<ans[i]<<"\n";
}

