#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int suma=0,sumb=0,c=0,nor=0,k1=1,k2=2;
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
		if(c==1)cout<<"Anuj"<<endl;
		else if(c==2)cout<<"Ankit"<<endl;
	}
	return 0;
}
