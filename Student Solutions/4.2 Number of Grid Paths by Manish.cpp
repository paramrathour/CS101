#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NOGP(int n,int m){
   if (n==1 || m==1){
      return 1;
   }
   else
     return NOGP(m-1,n)+NOGP(m,n-1);

}
int main(){
  int t;
  cin>>t;
  int out[t];
  for (int i=0;i<t;i++){
    int m,n;
    cin>>m>>n;
    out[i]=NOGP(m,n);
}
  for (int i=0;i<t;i++)
    cout<<out[i]<<endl;

}
