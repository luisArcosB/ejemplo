#include<iostream>

using namespace std;

int main(){
	int A, B, aux;
	
	cout<<"Digite El valor de A: "; cin>>A;
	cout<<"Digite El valor de B: "; cin>>B;
	
	aux = A;
	
	A = B;
	
	B = aux;
	
	
	cout<<"El nuevo valor de A es: "<<A<<endl;
    cout<<"El nuevo valor de B es: "<<B<<endl;
    
	return 0;
	
}