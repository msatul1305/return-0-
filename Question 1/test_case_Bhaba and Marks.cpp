#include<iostream>
#include <fstream>
using namespace std;
long long int arr[1000001],N,K,sum,i,t;
main()
{
       FILE *fp;
       fp=fopen("in BAM.txt","w");
       //srand ( time(NULL) );
       t=rand()%100 +1;
       fprintf(fp,"%lld\n",t);
       while(t--)
       {
	             N=rand()%10000 +1;
               K=rand()%1000000;
	             fprintf(fp,"%lld %lld\n",N,K);
	             for(i=0;i<N;i++)
	             {
                                 arr[i]=rand()%1000000;
                                 fprintf(fp,"%lld ",arr[i]);
              }
              fprintf(fp,"\n");
       }
	   return 0;
}
