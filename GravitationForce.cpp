#include <bits/stdc++.h>
using namespace std;

 double G = 6.67e-11;

void force(double x1, double y1, double z1, double m1, double x2, double y2, double z2, double m2)
{
	double rsq = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1);
	double r = sqrt(rsq);
	double Fx = ((G*m1*m2)/(rsq))*(x2-x1)/r;
	double Fy = ((G*m1*m2)/(rsq))*(y2-y1)/r;
	double Fz = ((G*m1*m2)/(rsq))*(z2-z1)/r;
	cout<<"("<<Fx<<", "<<Fy<<", "<<Fz<<")\n";
}

int main()
{
        double x1, double y1, double z1, double m1, double      x2, double y2, double z2, double m2;
        cin>>x1>>y1>>z1>>m1>>x2>>y2>>z2>>m2;
	force(x1, y1, z1, m1, x2, y2, z2, m2);
}
