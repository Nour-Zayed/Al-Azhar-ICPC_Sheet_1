#include <iostream>
#include <algorithm> // For std::sort

using namespace std;

int main()
{

int x,y,z;
int a,b,c;
cin>>x>>y>>z;
if (x>=y&&x>=z){
     a=x;

   if(y>=z){
    b=z;
     c=y;

   }else{

      b=y;
       c=z;
}

   }else if(y>=x&&y>=z){
   a=y;



      if(x>=z){
    b=z;
    c=x;
    }
     else{


    b=x;
    c=z;
     }}
   else{
        a=z;
        if(x>=y){
            b=y;
            c=x;
        }
        else{
            b=x;
            c=y;
        }
     }





cout<<b<<"\n"<<c<<"\n"<<a<<"\n"<<"\n";
cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
    return 0;
}
