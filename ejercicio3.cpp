 #include<iostream>
using namespace std;
int main(){
	int nmr,ter1,ter2,i,fibo,sumf,op;
	cout<<"Ingrese el numero de terminos de la serie de fibonacci que desea que se muestre: ";
	cin>>nmr;
	cout<<"desea ver la suma de los terminos de la serie de fibonacci?"<<endl;
	cout<<"de ser asi ingrese 1 y en caso contrario ingrese 0"<<endl;
	cin>>op;
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
    if(op!=1){
	}
	else{
		cout<<endl<<"la suma de la serie de fibonacci es :"<<sumf;
		
	}
	return 0;
}
