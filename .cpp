#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float p1,p2,result;
	
	cout<< "informe a sua primeira nota: ";
	cin>> p1;
	
	cout << "informe a segunda nota: ";
	cin >> p2;
	
	result = (p1+p2) / 2;
	
	if(result >+7){
		colt << "voc� passou com a nota" <<r << "par�bens";
	}else {
		cout << "n�o foi dessa vez";
	}
}
