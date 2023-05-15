#include <bits/stdc++.h>
using namespace std;

int main()
{
	long double x = 1;
	double h = 0.0001;
	double t = 0;
	while(t<76.5)
	{
		x = x + h*sin(x*t);
		t = t + h;
	}
	cout<<x<<"\n";
}

