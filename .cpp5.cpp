#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string letra;
	
	cout << "insira uma letra: " ;
	cin>> letra;
	
	if(letra =="a" or letra == "e" or letra =="i" or letra =="o" or letra =="u"){
		cout << "sua letra é uma vogal: "; 
	} else{
		cout << "letra consoante" ;
	}

}

