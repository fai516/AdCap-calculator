#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int from,to;
	double a,r;	

	cout << "From: "; cin >> from;
	cout << "To: "; cin >> to;
	cout << "Start: "; cin >> a;
	cout << "Rate: "; cin >> r;

	//S=a*(r^n-1)/(r-1)

	long double ans =  a*(pow(r,to-from)-1)/(r-1);  
	cout << ans << endl;

	return 0;
}
