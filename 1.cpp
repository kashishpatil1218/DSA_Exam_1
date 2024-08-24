// 1.
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the value of n :";
	cin >> n;
	
	int a[n];
	int i;
	
	cout<<"Enter the elements of a"<<endl;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	int maximum=a[0];
	
	for(i=1; i<n; i++)
	{
		if(a[i]>maximum)
		{
			maximum=a[i];
		}
	}
	cout << "Maximum number :"<< maximum<< endl;
	return 0;
}
