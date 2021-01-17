#include <bits/stdc++.h>

using namespace std;
long int DN(int n,int m){
  if (n==1){
     return 2*m+1;
  }
  else if (m==1){
     return 2*n+1;
  }
  else
     return DN(n-1,m)+DN(n,m-1)+DN(n-1,m-1);

}


int main(){
    int t,n,m;
    cin>>t;
    long int ans[t];
    for (int i=0;i<t;i++){
      cin>>n>>m;
      ans[i]=DN(n,m);
    }
    for (int i=0;i<t;i++)
      cout<<ans[i]<<"\n";
}
