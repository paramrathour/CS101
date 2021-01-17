#include<simplecpp>


void Hilbert(int n,Turtle &t1,int a,double x){
if (n==1){
  t1.forward(x);
  t1.right(a);       //Base Case
  t1.forward(x);
  t1.right(a);
  t1.forward(x);

}

else if (n%2==0) {

  Hilbert(n-1,t1,-a,x);
  t1.right(a);
  t1.forward(x);
  Hilbert(n-1,t1,a,x);    //the connecting lines behave differently
  t1.left(a);           //for even n and odd n
  t1.forward(x);
  t1.left(a);
  Hilbert(n-1,t1,a,x);    // and also for the first sub hilbert it starts from reverse
  t1.forward(x);       // then 2 times forward and again reverse
  t1.right(a);
  Hilbert(n-1,t1,-a,x);

}
else if (n%2==1) {

  Hilbert(n-1,t1,-a,x);
  t1.forward(x);
  t1.right(a);
  Hilbert(n-1,t1,a,x);

  t1.forward(x);

  Hilbert(n-1,t1,a,x);
  t1.right(a);
  t1.forward(x);
  Hilbert(n-1,t1,-a,x);

}
}

main_program{
initCanvas("a",1600,1000);
Turtle t1;
int a;
cin>>a;
float x=450/(pow(2,a)-1);
if (a%2==1) t1.left(90);
Hilbert(a,t1,90,x);
getClick();
}
