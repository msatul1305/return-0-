#include<iostream>
#include<fstream>
#include<limits.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
main(){
		FILE *fp;
        ifstream inFile;
        inFile.open("in DMC.txt");
        fp=fopen("out DMC.txt","w");
	long long int t;
	inFile>>t;
	//cin>>t;
	while(t--){
		long long int a,b;
		inFile>>a;
		inFile>>b;
		//cout<<"a= "<<a<<" b= "<<b<<endl;
		//cin>>a>>b;
		long long int suma=0,sumb=0,c=0,nor=0,k1=1,k2=2;
		while(suma<=a&&sumb<=b){
			if(nor%2==0){
				if(nor==0){
				suma+=k1;
				k1=k1+2;
				}
				else {
					suma+=k1;
					k1+=2;
					}	
			}
			
			else{
			sumb+=k2;
			k2+=2;
			}
//			cout<<"nor= "<<nor<<endl;
//			cout<<"suma="<<suma<<"  "<<endl;
//			cout<<"sumb="<<sumb<<"  "<<endl;
				nor++;
			
			if(suma>a){
				c=1;
				break;
			}
			else if(sumb>b){
				c=2;
				break;
			}
		}
				//memset(arr,0,sizeof(arr));
                 //fprintf(fp,"%lld\n");
		if(c==1)fprintf(fp,"Anuj\n");
		else if(c==2)fprintf(fp,"Ankit\n");
		
		if(c==1)cout<<"Anuj"<<endl;
		else if(c==2)cout<<"Ankit"<<endl;
	}
}
