#include<iostream>
using namespace std;
int main(){
	int n;
	long long x;
	cout<<"ingrese un numero: ";
	cin>>n;           // hasta que numero quieres que encuentre los primos
	for(int i=2;i<=n;i++){          // busca todos los primos
		int s=0;
		for(int j=1;j<=n;j++){
			if(i%j==0){
				s+=1;
			}
		}
		if(s==2){                //si es primo
			x=600851475143;
			if(x%i==0){      // busca sus numeros primos de 600851475143
				cout<<i<<endl;    
				x=x/i;           // encuentra sus primo y lo va dividiendo
			}
		}

	}
	return 0;
}
