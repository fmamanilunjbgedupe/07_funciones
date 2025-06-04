#include <iostream>
using namespace std;
int mcd(int a, int b){
	return(b==0)? a: mcd(b,a%b);
}
int mcm( int a , int b){
	return (a*b)/mcd(a,b);
	
}
int main(){
	int num1,num2,op;
	op=1;
	while(op==1){
	cout<<"ingrese el primer numero: ";
	cin>>num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	cout<<"máximo comun divisor (mcd): "<<mcd(num1,num2)<<endl;
	cout<<"minimo comun divisor (mcm): "<<mcm(num1,num2)<<endl;
	cout<<"ingrese 1 si quiere realizar la misma operacion con otros numeros de caso contrario ingrese 0 o tro numero"<<endl;
	cin>>op;
	}
	
	return 0;
}
