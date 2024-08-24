#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size:";
	cin>>n;
	int i=2,j=3,check=0,sum=0;
	cout<<"1"<<endl<<"2"<<endl;
	
	for(j=3;j<=n;j++)
	{
		check=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				check=1;
				break;
			}
			
		}
		if(check==0)
			{
				cout<<j;
				sum=sum+1+2+j;
			}
	}
	cout<<" sum is :"<<sum;
	return 0;
}
