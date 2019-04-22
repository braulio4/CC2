#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long n,s1,s2,x;
	cout<<"ingrese un numero: ";
	cin>>n;  // limite de la suma de cuadrados
	s1=0;   //acumulador de la multiplicacion
	s2=0;   // acumulador de la suma
	for(int i=1;i<=n;i++){  //suma y multiplica los n numeros
		s1+=i*i; 
		s2+=i;
	}
	s2=pow(s2,2);   // despues de sumar se lo eleva al cuadrado
	x=s2-s1;  // se resta la multiplicacion con la suma
	cout<<x;
	return 0;
}
