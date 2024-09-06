#include <iostream>

using namespace std;


int combinatoria(int n,int k){
	int resp;
	if(n==k){
		
		resp= 1;
		
	}else{
		if(k==1){
			resp=n;
		}else{
			resp= combinatoria(n-1,k-1)+combinatoria(n-1,k);
		}
		
	}
	return resp;
}
int main(){
	int n,k;
	cout<<"INTRODUZA LOS VALORES DE CONBINATORIA  C(n,k):"<<endl<<"n:  ";
	cin>>n;
	cout<<"k: ";
	cin>>k;
	while(k<0||n<0){
		cout<<"intente nuevamente: ";
		cout<<"INTRODUZA LOS VALORES DE CONBINATORIA  C(n,k):"<<endl<<"n:  ";
		cin>>n;
		cout<<"k: ";
		cin>>k;
	}
	
	
	cout<<"Resultado: "<<combinatoria(n,k);
	return 0;
}

