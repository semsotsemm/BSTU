#include <iostream>
double	f(double x) {
	return pow(x, 3) + x - 3;
}
int main()
{
	using namespace std;
	setlocale(LC_CTYPE,"Russian");
	double fa=1, fb=1,x=100, step = 0.1,e=0.0001,x1,a,b;
	while (fb*fa>0)
	{
		fa = f(x);
		fb = f(x - step);
		if (fb*fa>0)
		{
		x = x - step;
		}
	}
	cout <<"Отрезок на котором находится корень [ " << x-step<<"; "<<x<<" ]"<<endl;
	a = x; b = x - step;
	while (abs(a-b)>2*e)
	{
		x1 = (a + b) / 2;
		if (f(x1)*f(a)<=0)
		{
			b = x1;
		}
		else {
			a = x1;
		}
	}
	cout << "x = " << x1;
}