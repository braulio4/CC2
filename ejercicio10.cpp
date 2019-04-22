#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,x,s;
	cout<<"suma de primos menores de: ";
	cin>>n;
	x=0;
	for(int i=2;i<n;i++){
		s=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				s+=1;
			}
		}
		if(s==2){
			x+=i;
		}
	}
	cout<<x;
	return 0;
}
