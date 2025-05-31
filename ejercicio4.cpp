#include<iostream>
using namespace std;
int factorial(int);//prototipo
int main(){
	int m,l,n,c;
	cout<<"para realizar la combinatoria:"<<endl;
	cout<<"ingrese el valor de m:"<<endl;
	cin>>m;
	cout<<"ingrese el valor de n"<<endl;
	cin>>n;
	l=m-n;
	c=factorial(m)/(factorial(n)*factorial(l));
	cout<<"el resultado de la combinatoria es :  "<<c;
	return 0;
}
int factorial (int n){
	int f;
	f=1;
	for(int i=2;i<=n;i++){
	    f=f*i;
    }
    return f;
}
