#include<iostream>
using namespace std;
void perfecto(int x);
int main(){
	int n;
	cout<<"ingrese un numero para determinar si es perfecto o no"<<endl;
	cin>>n;
	perfecto(n);
	return 0;
}
void perfecto(int x){
	int i,s;
	s=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			s=s+i;
		}
	}
	if(s==x){
		cout<<"el numero "<<x<<" es perfecto";
	}
	else{
		cout<<" el numero "<<x<<" no es perfecto";
	}
}
