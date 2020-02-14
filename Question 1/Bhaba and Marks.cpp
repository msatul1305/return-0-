#include<iostream>
using namespace std;
long long int arr[1000000],N,K,sum,i;
main()
{
       int t;
       cin>>t;
       while(t--)
       {
	             cin>>N>>K;
	             for(i=0;i<N;i++)
	             cin>>arr[i];
	             sum=0;
	             for(i=0;i<N;i++)
	             {
                                 if(arr[i]>=K)
                                 sum++;
                 }
                 cout<<sum<<"\n";
       }
	   return 0;
}
