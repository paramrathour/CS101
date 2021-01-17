#include <bits/stdc++.h>
using namespace std;

double ser(int k)
{
double val=1.0;
for(int i=1;i<=k;i++)
 val*=2.0*i/(i+k);
 return val;
}

int main()
{
int n;cin>>n;
for(int i=1;i<=n;i++)
{
int k;cin>>k;
double pie=0.0;
for(int j=0;j<k+1;j++)
pie=pie+ser(j)/(2*j+1);
cout<<setprecision(10)<<fixed<<2*pie<<endl;
}

}
