#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	//Creating three variables;
	float x,y,z;
	
	cout << "Enter the base";
	cin >> x;
	
	cout << "Enter the exponent";
	cin >> y;
	
	z=pow(x,y);
	
	cout << "The power is "<<z<<endl;
	
	return 0;
}
