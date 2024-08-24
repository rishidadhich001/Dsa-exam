#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"enter array a size n:";
	cin>>n;
	int a[n];
	
	int i,j,max=1;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter array element :";
		cin>>a[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}		
	}
	cout<<max<<endl;
	return 0;
}
