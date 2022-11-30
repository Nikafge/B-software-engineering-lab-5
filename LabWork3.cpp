#include<iostream>
#include<math.h>
using namespace std;

void CheckValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect input";
	}
}

void CheckValidInput2(int b)
{
	if (b < 0)
	{
		throw "incorrect input";
	}
}

double Calculate(int b, double x)
{
	int k, i = 1;
	double y = 0, P = 1;
	if (x <= 0)												//Value of "y" (if x <= 0)
	{
		cout << "\n" << "Solutin of y by steps" << "\n";
		for (int k = 0; k < b; k += 1)
		{
			if (k == 0)
			{
				continue;
			}
			P *= ((k * k * k) + k);
			cout << i << ") " << P << "\n";
			i++;
		}
		y = P;
		return y;
	}
	else
	{
		y = 0;
		cout << "\n" << "Solutin of y by steps" << "\n";
		for (k = 0; k < b; k += 1)								//Value of "y" (if x > 0)
		{
			double S = 0;
			for (int j = 0; j < b; j++)
			{
				if (j == 0)
				{
					continue;
				}
				S += (x / (k + j));
				cout << i << ") " << S << "\n";
				i++;
			}
			y += S;
		}
		return y;
	}
}
int main(int argc)
{
	int b;											//Declaration of variables
	double x, P = 1;
	try
	{
		cout << "Enter interval (to)" << "\n";
		cin >> b;												//Data input
		cout << "Enter X" << "\n";
		cin >> x;
		CheckValidInput();
		CheckValidInput2(b);
		cout << "y=" << Calculate(b, x) << "\n";
	}
	catch (const char* ex)
	{
		cout << ex << "\n";
		return -1;
	}
	catch (...)
	{
		cout << "Error" << "\n";
		return -2;
	}
	return 0;
}