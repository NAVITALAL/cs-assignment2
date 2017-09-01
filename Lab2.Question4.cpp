#include <iostream>
using namespace std;

int main() {
  
   int  x,y,w,d;
     
    cout << "Enter the number of days"<<endl;
    cin >> x;
     
     y=x/365;
  cout<< "years "<<y<<endl;
  
     w=(x-(365*y))/7;
 cout <<"weeks"<<w<<endl;
 
     d=x-(365*y)-(7*w);
     cout<<"days"<<d<<endl;

  
  	return 0;
}
