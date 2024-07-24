#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

int x,y;
cin >>x>>y;


  cout<<"floor "<<  x << " / " << y << " = " <<floor(static_cast<double>(x) / y) <<"\n";
  cout <<"ceil "<<  x << " / " << y << " = " <<ceil (static_cast<double>(x) / y) <<"\n";
  cout<<"round "  << x << " / "<< y<< " = "  << round (static_cast<double>(x) /y ) ;

    return 0;
}
