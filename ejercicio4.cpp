#include<iostream>
using namespace std;
int main(){
	int x,n;
	n=10000;     // la base de cual puede ser 
	for(int i=100;i<1000;i++){      // bucle desde 100 hasta 999
		for(int j=100;j<1000;j++){    // bucle desde 100 hasta 999
			x=i*j;      //multiplica los dos numeros de 3 digitos
			if(x<10000){           // si son numeros de 4 digitos
				int a,b,c,d;
				a=x/1000;         //descompongo el numero
				b=(x-(a*1000))/100;
				c=(x-((a*1000)+(b*100)))/10;
				d=x-((a*1000)+(b*100)+(c*10));
				if((a==d)&&(b==c)){    // si el numero es palindromo
					if(x>n){
						n=x; // reemplaza el anterior palindromo encontrado si es mayor
					}
				}
				else
					continue;
			}
			else if(x<100000){    // si son numeros de 5 digitos
				int a,b,c,d,e;
				a=x/10000;             //descompongo el numero
				b=(x-(a*10000))/1000;
				c=(x-((a*10000)+(b*1000)))/100;
				d=(x-((a*10000)+(b*1000)+(c*100)))/10;
				e=(x-((a*10000)+(b*1000)+(c*100)+(d*10)));
				if(a==e && b==d){      // si el numero es palindromo
					if(x>n){
						n=x;         // reemplaza el anterior palindromo encontrado si es mayor
					}
				}
				else
					continue;
			}
			else if(x<1000000){     // si son numeros de 6 digitos
				int a,b,c,d,e,f;
				a=x/100000;                    //descompongo el numero
				b=(x-(a*100000))/10000;
				c=(x-((a*100000)+(b*10000)))/1000;
				d=(x-((a*100000)+(b*10000)+(c*1000)))/100;
				e=(x-((a*100000)+(b*10000)+(c*1000)+(d*100)))/10;
				f=(x-((a*100000)+(b*10000)+(c*1000)+(d*100)+(e*10)));
				if((a==f && b==e && c==d)){       // si el numero es palindromo
					if(x>n){
						n=x;             // reemplaza el anterior palindromo encontrado si es mayor
					}
				}
				else
					continue;
			}
		}
	}
	cout<<"el mayor palindromo es: "<<n;
	return 0;
}
