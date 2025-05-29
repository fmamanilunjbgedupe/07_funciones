#include<iostream>//ing ludopata
using namespace std;
void resta(int val1,int val2);
int producto(int val1, int val2);
void division( float val1,float val2);
void suma(int val1,int val2);
int main (){
	int num1,num2,resultado;
	cout<<"ingrese el primer numero"<<endl;cin>>num1;
	cout<<"ingrese el segundo numero"<<endl;cin>>num2;
	resta(num1,num2);
	resta(num2,num1);
	resultado=producto(num1,num2);
	cout<<"la multiplicacion de "<<num1<<" por "<<num2<<" es :"<<resultado<<endl;
	suma(num1,num2);
	division(num1,num2);
	division(num2,num1);
	return 0;
	}
	//funcion resta
	void resta(int val1,int val2){
		int sustrac;
		sustrac=val1-val2;
		cout<<"la resta de "<<val1<<" - "<<val2<<" es : "<<sustrac<<endl;
	}
	//funcion producto
	int producto(int val1,int val2){
		int prod;
		prod=val1*val2;
		return(prod);
	}
	//funcion suma
	void suma(int val1, int val2){
		int sm;
		sm=val1+val2;
		cout<<"la suma de "<<val1<<" + "<<val2<<" es: " <<sm<<endl;
	}
	//funcion division
    void division( float val1,float val2){
    	float div;
    	if(val2!=0){
    		div=val1/val2;
			cout<<"el resultado de dividir "<<val1<<" / "<<val2<<" es : "<<div<<endl;
		}
		else{
		    cout<<"no se puede realizar la operacion "<<val1<<" / "<<val2<<endl;
			
		}
	}
