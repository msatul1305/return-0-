#include<iostream>
#include<fstream>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
main(){
	long long int t;
		FILE *fp;
       fp=fopen("in DMC.txt","w");
       t=rand()%1000 +1;
       fprintf(fp,"%lld\n",t);
	//cin>>t;
	while(t--){
		long long int a,b;
		//cin>>a>>b;
		a=rand()%1000+1;
		b=rand()%1000+1;
		fprintf(fp,"%lld %lld\n",a,b);
//		long long int suma=0,sumb=0,c=0,nor=0,k1=1,k2=2;
//		while(suma<=a&&sumb<=b){
//			if(nor%2==0){
//				if(nor==0){
//				suma+=k1;
//				k1=k1+2;
//				}
//				else {
//					suma+=k1;
//					k1+=2;
//					}	
//			}
//			
//			else{
//			sumb+=k2;
//			k2+=2;
//			}
//				nor++;
//			
//			if(suma>a){
//				c=1;
//				break;
//			}
//			else if(sumb>b){
//				c=2;
//				break;
//			}
		}
//		if(c==1)cout<<"Anuj"<<endl;
//		else if(c==2)cout<<"Ankit"<<endl;
	}
