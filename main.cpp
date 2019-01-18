#include <iostream>
#include <complex>

using namespace std;
complex<double> delta(double x,double y, double z){
	complex<double> d;
	d = (y*y)-(4*x*z);
	return d;
}

int main(){
		double a,b,c;
		complex<double> p1,p2,d;
		cout << "Wprowadz A:";
		cin >> a;
		cout << "Wprowadz B:";
		cin >> b;
		cout << "Wprowadz C:";
		cin >> c;
		d=delta(a,b,c);
		
		p1=(-b-sqrt(d))/(2*a);
		p2=(-b+sqrt(d))/(2*a);
		cout << p1 << endl;
		cout << p2 << endl;
		
		return 0;
}