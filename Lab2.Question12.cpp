#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
   float a,b,c,d;
   
   cout<<"principal "<<endl;
   cin>>a;
 
   cout<<"rate "<<endl;
   cin>>b;
 
   cout<<"time "<<endl;
   cin>>c;
   
 d=(a*pow((1+(b/100)),c))-a;
   cout<<"coumpound interest = "<<d<<endl;
   
  	return 0;
}
