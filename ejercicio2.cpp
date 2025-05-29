#include<iostream>
using namespace std;
int cocienteresto( int var1, int var2);
int main(){
	int num1,num2,numy,numr;
	cout<<"ingrese el primer numero entero"<<endl;
	cin >>num1;
	cout<<"ingrese el segundo numero entero"<<endl;
	cin>>num2;
	if(num1<num2){
		numy=num2;
		numr=num1;
	}
	else{
		numy=num1;
		numr=num2;
	}
    cocienteresto(numy,numr);
    return 0;
}
cocienteresto(int n1,int n2){
	int i;
	i=0;
	while(n2<=n1){
		n1=n1-n2;
		i=i+1;
	}
	cout<<"el cociente es: "<<i<<endl;
	cout<<"el resto de la funcion es: "<<n1<<endl;
	return 0;
}
