#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int x,y;
char z;
cin>>x>>z>>y;
if(z=='+')
{
  cout<<x+y;

}else if(z=='-'){
cout<<x-y;

}
else if(z=='*'){
    cout<<x*y;
}else{
cout<<x/y;
}

    return 0;
}
