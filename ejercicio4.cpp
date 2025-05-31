#include<iostream>
using namespace std;
int factorial(int);//prototipo
int main(){
	int m,l,n,c;
	cout<<"para realizar la combinatoria:"<<endl;
	cout<<"ingrese valores mayores a 0 o se volvera a solicitar que ingrese valores para m y n"<<endl;
	do{
	cout<<"ingrese el valor de m:"<<endl;
	cin>>m;
	cout<<"ingrese el valor de n"<<endl;
	cin>>n;
    }while(m<=0||n<=0);
	l=m-n;
	c=factorial(m)/(factorial(n)*factorial(l));
	cout<<"el resultado de la combinatoria es :  "<<c<<endl;
	if(c==0){
		cout<<"las respuesta es cero ya que "<<m<<"-"<<n<<" da negativo o da 0"<<endl;
	}
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
