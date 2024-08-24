//3 .WAP TO FIND THE SUM OF PRIME NUMBERS FROM 1 TO N.

#include<iostream>
using namespace std;

int Prime(int k)
{
	int i;
	if(k<=1)
	{
		return 0;
	}
	for(i=2; i*i<=k; i++)
	{
		if(k%i==0)
		{
			return 0;
			
		}
	}
	return 1;
}

int sum(int s)
{
	int i,sum_s=0;
	for(i=2; i<=s; i++)
	{
		if(Prime(i))
		{
			sum_s+=i;
		}
	}
	return sum_s;
}
int main()
{
	int n;
	cout << "Enter the value of n :";
	cin >> n;
	
	cout << "sum of Prime number :"<< sum(n)<<endl;
	return 0;
}



