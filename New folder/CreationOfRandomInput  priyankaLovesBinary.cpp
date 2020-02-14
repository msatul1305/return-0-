#include<iostream>
#include<fstream>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
main()
{
	long long int test,m,n,a,b,r;
	char arr[101][101];
		FILE *fp;
       fp=fopen("in PLB.txt","w");
       test=rand()%100 +1;
       fprintf(fp,"%lld\n",test);
	//cin>>test;
	while(test--)
	{
		a=0;
		b=0;
		r=0;
		n=rand()%100+1;
		m=rand()%100+1;
		//cin>>n>>m;
		fprintf(fp,"%lld %lld\n",n,m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int k=rand()%2;
				char abc=k+48;
				arr[i][j]=abc;
				cout<<arr[i][j]<<" ";
				fprintf(fp,"%c",arr[i][j]);
//				cin>>arr[i][j];
//				if((i+j)%2==0&&arr[i][j]=='0')
//				a+=3;
//				else if((i+j)%2!=0&&arr[i][j]=='1')
//				a+=5;
//				if((i+j)%2==0&&arr[i][j]=='1')
//				b+=5;
//				else if((i+j)%2!=0&&arr[i][j]=='0')
//				b+=3;
			}
			fprintf(fp,"\n");
		}
//		r=a<b?a:b;
//		cout<<r<<endl;
	}
}
