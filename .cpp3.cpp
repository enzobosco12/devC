#include <iostream>

using namespace std;

main(){
	float p1,p2 ;
	
	cout<< "informe o numero: " ;
	cin>> p1;
	
	cout<< "informe outro numero: " ;
	cin>> p2;
	
	if( p1>p2){
		cout << "numero maior" << p1 << "numero menor: " <<p2;
	} else if(p2 > p1){
		cout << "numero maior" << p2 << "numero menor: " <<p1;
	}else {
		cout << "iguais";
	}
}
