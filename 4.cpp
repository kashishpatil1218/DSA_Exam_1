// 4 .WAP TO FIND THE SUM OF EVEN NUMBERS FROM 1 TO N USING RECURSION.

#include<iostream>
using namespace std;

int sum (int n)
{
	if(n>2)
	{
		return 0;
	}
	if(n%2==0)
	{
		return n+sum(n-2);
	}
	else
	{
		 return sum(n-1);
	}
}
int main()
{
	int n;
	
	cout << "enter the value of n :";
	cin >> n;
	
	cout << "Even number sum is :" << n << sum(n)<< endl;
	return 0;
}
