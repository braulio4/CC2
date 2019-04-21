#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ingrese un numero: "; 
	cin>>n;           //ingreso 1000
	int x=0;          // el acumulador
	for(int i=1;i<n;i++){       // un bucle hasta antes de 1000
		if(i%3==0 || i%5==0)  // multiplos de 3 o 5
		x+=i;         // suma los numeros que cumplan la condicion multiplos de 3 o 5
	}
	cout<<x<<endl;
	return 0;
}
