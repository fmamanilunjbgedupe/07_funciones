 #include<iostream>
using namespace std;
int main(){
	int nmr,ter1,ter2,i,fibo,sumf;
	cout<<"Ingrese el numero de terminos de la serie de fibonacci que desea que se muestre: ";
	cin>>nmr;
	ter1=1;
	ter2=0;
	fibo=0;
	sumf=0;
	for(i=1; i<=nmr; i++){
		fibo=ter1+ter2;
		ter1=ter2;
		ter2=fibo;
		cout<<fibo<<",";
		sumf=sumf+fibo;
    }
	return 0;
}
