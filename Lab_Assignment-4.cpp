//              LAB-ASSIGNMENT -4



//// 1) program to print a table of any number.
//#include <iostream>
//using namespace std;
//int main()
//{
//	int number = 0;
//	int base = 0;
//	int final = 0;
//	int i = 0;
//	cout << "enter how many number you would like in your table!" << endl;
//	cin >> number;
//	cout << "enter the base part number of your program!" << endl;
//	cin >> base;
//	cout << "\n\n\n your program starts here!" << endl;
//	while ( i<number)
//	{
//		final = base * i;	
//		cout << final << endl;
//		i++;
//	}
//	
//	system("pause");
//	return 0;
//}





//// 2) Program to print Fibonacci series up to 100.
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	int b = 1;
//	while ((a+b < 100) || (b+a <100))
//	{
//		cout << a << endl;
//		a = a + b;
//		cout << b << endl;
//		b = b + a;
//	}
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double radius;
	double area;
	cout << "Input radius of circle" << endl;
	cin >> radius;
	area = radius * radius * 3.1415;
	cout << area;
	return 0;
}