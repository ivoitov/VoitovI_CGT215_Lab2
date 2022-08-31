#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hi, I'm Ivan and today I'm going to solve the equation:\n";
	cout << "Ax + B = 0\n";
	cout << "For x\n";
	cout << "\n";
	cout << "Please enter a value for A:";
	cin >> A;
	cout << "Please enter a value for B:";
	cin >> B;
	cout << "\n";
	cout << "Solving ";
	cout << A;
	cout << "x+";
	cout << B;
	cout << "=0 for x...\n";
	X = (B*(-1))/A;
	cout << "\n";
	cout << "The solution for x is:\n";
	cout << "x=" << X << endl;
}