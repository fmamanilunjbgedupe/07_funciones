#include<iostream>
using namespace std;
void primo(int x);
int main (){
	int n;
	cout<<"ingrese el numero para determinar si es primo o no"<<endl;
	cin>>n;
	primo(n);
	return 0;
}
void primo(int x){
	int d,i;
	d=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			d=d+1;
		}
	}
	if (d>2){
		cout<<"el numero "<<x<<" no es primo";
	}
	else{
		cout<<"el numero "<<x<<" es primo";
	}
}
