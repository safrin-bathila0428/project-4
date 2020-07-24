
#include<iostream>
using namespace std;
int  sumoftwoprime(int n);
int main()
{
	int n,i,flag=0;
	cout<<"enter the positive integer:";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if( sumoftwoprime(i)==1)
		{
			if( sumoftwoprime(n-i)==1)
			{
				cout<<n<<"can be expressed as sum of two prime"<<i<<"and"<<n-i;
				flag=1;
			}
		}
	}
	if(flag==0)
	cout<<n<<"\ncannot be expressed as sum of two prime";
	return 0;
}
int sumoftwoprime(int n)
{
	int i, isprime=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			 isprime=0;
			break;
		}
	}
	return isprime;
}
