#include <iostream>

using namespace std;

main(){
	
	float p1,p2,faltas,result;
	
	cout << "quantas faltas: " ;
	cin >> faltas;
	
	if(faltas <= 25){
	
		cout<< "informe a sua primeira nota: ";
		cin>> p1;
		
		cout << "informe a segunda nota: ";
		cin >> p2;
		
		result = (p1+p2) / 2;
	
		if(result >=6){
			cout << "você passou com a nota" << result << "parábens";
		}else {
			cout << "não foi dessa vez";
		}
	}else {
		cout << "voce reprovou por faltas";
	}
}

