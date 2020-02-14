#include<iostream>
#include<limits.h>
#include<string.h>
#include <fstream>
using namespace std;
main()
{
		FILE *fp;
        ifstream inFile;
        inFile.open("in PLB.txt");
        fp=fopen("out PLB.txt","w");
	long long int test,m,n,a,b,r;
	char arr[101][101];
	inFile>>test;
	//cin>>test;
	while(test--)
	{
		a=0;
		b=0;
		r=0;
		inFile>>n>>m;
		//cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				inFile>>arr[i][j];
				//cin>>arr[i][j];
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
					memset(arr,0,sizeof(arr));
                 fprintf(fp,"%lld\n",r);
		cout<<r<<endl;
	}
	return 0;
}
