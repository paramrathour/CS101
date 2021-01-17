#include <simplecpp>
int GCD(int &m,int &i){  //GCD function for checking repeating fractions
long int x,y,nextx,k;
  x=min(m,i);
  y=max(m,i);
  if (y%x==0)
   return x;
  else{
  while (true){
    nextx=y%x;
    y=x;
    x=nextx;
    if (y%x==0){
     k=x;
     break;}


  }
  return k;
  }

}


void Farey(int &n){
  cout<<0<<"/"<<1<<" ";
  float min=1.0,o=1.0,k;    //o=min for each loop
  int p,q,l=0;
  for (int i=1;i<=n;i++){   //for number of terms in the sequence
    for (int m=i+1;m<=n;m++){
     if (GCD(m,i)!=1)
       continue;
     else
      l+=1;}

  }

   min=float(1)/n;
   o=1.0;
   cout<<1<<"/"<<n<<" ";  //first term
  repeat(l-1){
   for (int i=1;i<=n;i++){
    for (int m=i+1;m<=n;m++){
      k=float(i)/m;       //k for comparing each term
      if (GCD(m,i)!=1){   //repetition
        continue;
      }
      else if (k==min){   //if it is equal to last term
        continue;
      }
      else if (k<o && k>min){  //making sure that next term is greater than last
        o=k;
        p=i;
        q=m;

      }


  }


  }  min=o;
   o=1.0;
   cout<<p<<"/"<<q<<" ";


}cout<<1<<"/"<<1;
return;
}
main_program{
  int n;
  cin >>n;
  Farey(n);
}
