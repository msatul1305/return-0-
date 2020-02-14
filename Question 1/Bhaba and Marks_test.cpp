#include<iostream>
#include<limits.h>
#include<string.h>
#include <fstream>
using namespace std;
long long int arr[1000001],N,sum,i,K;
main()
{
        FILE *fp;
        ifstream inFile;
        inFile.open("in BAM.txt");
        fp=fopen("out BAM.txt","w");
       int t;
       inFile>>t;
       while(t--)
       {
         inFile>>N>>K;
         for(i=0;i<N;i++)
         inFile>>arr[i];
         sum=0;
         for(i=0;i<N;i++)
         {
                           if(arr[i]>=K)
                           sum++;
           }
           cout<<sum<<"\n";
                 memset(arr,0,sizeof(arr));
                 fprintf(fp,"%lld\n",sum);
       }
	   return 0;
}
