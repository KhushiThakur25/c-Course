#include<iostream>
using namespace std;
int main(){
	int a = 10;
	float b = 23.5f;
	double c = 566632.121452;
	long int d= 562215;
	char k = 'K';
//    cout << "Hello cpp";
//    cout << "Integer value \t" << a << endl;
//    cout << "Float value \t" << b << endl;
//    cout << "double value \t" << c << endl;
//    cout << "long int value \t" << d << endl;
//    cout << "char value \t" << k << endl;
    cout << "Sum of a and b is =" << a+b << endl;
    if (a%2 == 0){
    	cout << "Number is even" << endl;
	}
//	else{
//		cout << "Number is odd" << endl;
//	}
	if (a < 0){
		cout << "Number is negative" << endl;
	}
	else if(a > 0){
		cout << "Number is positive" << endl;
	}
	else{
		cout << "Number is zero";
	}
    
    return 0;
}
