#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,m,n,a,b,r;
	char arr[100][100];
	cin>>test;
	while(test--)
	{
		a=0;
		b=0;
		r=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if((i+j)%2==0&&arr[i][j]=='0')
				a+=3;
				else if((i+j)%2!=0&&arr[i][j]=='1')
				a+=5;
				if((i+j)%2==0&&arr[i][j]=='1')
				b+=5;
				else if((i+j)%2!=0&&arr[i][j]=='0')
				b+=3;
			}
		}
		r=a<b?a:b;
		cout<<r<<endl;
	}
	return 0;
}
