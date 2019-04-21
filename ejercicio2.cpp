#include<iostream>
using namespace std;
int main(){
	int num=1,anterior=0,aux,s;
	s=0;  // acumulador
	while(num<4000000){ // menores a 4 millones
		aux=num;         // auxiliar guarda el numero actual
		num+=anterior;   // suma el numero actual con el anterior
		anterior=aux;    // anterior toma el valor siguiente
		if(num%2==0){  // si es par se suma
			s+=num;
		}
	}
	cout<<"la suma es: "<<s;
	return 0;
}
