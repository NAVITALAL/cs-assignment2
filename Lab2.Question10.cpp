#include <iostream>
using namespace std;

int main() {
  
   float a,b,c,d,e,f,g,h,i;
   
   cout<<"subject 1"<<endl;
   cin>>a;
 
   cout<<"subject2 "<<endl;
   cin>>b;
 
   cout<<"subject3 "<<endl;
   cin>>c;
 
   cout<<"subject4 "<<endl;
   cin>>d;
 
   cout<<"subject5 "<<endl;
   cin>>e;
 
 f=a+b+c+d+e;
 cout<<"total marks "<<f<<endl;
 
 g=f/5;
 cout<<"average "<<g<<endl;
 
 cout<<"total of maximum marks of each subject "<<endl;
 cin>>h;
 
 i=(f/h)*100;
 cout<<"percentage "<<i<<endl;
 
  	return 0;
}
