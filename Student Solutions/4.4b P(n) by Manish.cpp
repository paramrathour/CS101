#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int m){
   int ans=1;
   if (m==0)
     return 1;
   else if (m<0){
     for (int i=0;i<-m;i++)
     ans*=-1;
   }
   else {
   for (int i=0;i<m;i++)
     ans*=-1;}
   return ans;
}
long long P(int m){
    int min=(1-sqrt(1+24*m))/6,max=(1+sqrt(1+24*m))/6,N=0;
    if (m==0)
      return 1;
    else{
    for (int i=min;i<=max;i++){
      if (i==0)
        continue;
      N=N+power(i-1)*P(m-(i*(3*i-1))/2);

    }
    return N;
}
}
int main(){
    int n;
    while(true){
      cin>>n;
      if (n==-1)
        break;
      else
        cout<<P(n)<<"\n";
    }

}
