#include<iostream>
using namespace std;
int main(){
	int n=2000;
	bool torre=true;
	while(torre==true){    // mientras sea verdad 
		if(n%2==0 && n%3==0 && n%5==0 && n%7==0 && n%9==0 && n%11==0 && n%12==0 && n%13==0 && n%14==0 && n%15==0 && n%16==0 && n%17==0 && n%18==0 && n%19==0 && n%20==0){
			torre=false;    // si cumple que encontro un numero que sea divisible desde 1 hasta el 20 se salga del bucle
		}
		else
			n++;    //si no es el numero que siga intentando con el siguiente
	}
	cout<<"el divisor de mayor: "<<n;
	return 0;
}
