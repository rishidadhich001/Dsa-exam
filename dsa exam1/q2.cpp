#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp=0;
	int a[n];
	cout<<"enter array a size:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	 	cout<<"enter array element :";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
    	}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
