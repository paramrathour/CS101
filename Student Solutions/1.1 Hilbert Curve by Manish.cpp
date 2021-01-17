#include<simplecpp>

void Hilbert(int n,int ori){
   if (n<=0)
     return;
   if (ori==-1){
     if (n==1 ){
       repeat(3){
        forward(5);left(90);
       }right(180);
}
    else{
     Hilbert(n-1,1);
     forward(5);
     Hilbert(n-1,-1);
     forward(5);right(90);
     Hilbert(n-1,-1);right(-90);forward(5);
     Hilbert(n-1,1);right(90);
   }

}
   else{
     if (n==1 ){
       left(90);
       repeat(3){
        forward(5);left(-90);
       }right(180);
}
    else{
     Hilbert(n-1,-1);
     forward(5);right(90);
     Hilbert(n-1,1);
     forward(5);
     Hilbert(n-1,1);right(90);forward(5);right(90);
     Hilbert(n-1,-1);left(90);


   }

   }
}
main_program{
turtleSim();
    int n;
    cin>>n;penUp();right(180);
    forward(200);left(90);
    forward(200);left(90);penDown();
    Hilbert(n,1);
        wait(10);


}
