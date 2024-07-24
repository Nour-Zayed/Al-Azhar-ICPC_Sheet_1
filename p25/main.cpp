#include <iostream>

using namespace std;

int main()
{

long long a,b,c,d;
cin>>a>>b>>c>>d;

a%=100;
b%=100;
c%=100;
d%=100;


 long long ans= a*b*c*d;
ans%=100;


if(ans>9){
    cout<<ans<<"\n";
}else{

cout<<"0"<<ans<<"\n";
}


    return 0;
}
