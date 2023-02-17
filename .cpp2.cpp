#include <iostream>

using namespace std;

main () {
	
	float nasc,hoje,result;
	
	cout<< "informe a sua idade: " ;
	cin>> nasc;
	
	cout << "informe o ano atual" ;
	cin >> hoje;
	
	result = (hoje-nasc) ;
	
	if(result >=16){
		cout << "cadatre-se" << result << "entre: ";
	} else {
		cout << "não foi dessa vez";
	}
}
