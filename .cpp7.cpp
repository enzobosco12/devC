#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "*************************" << endl ;
	cout << "*********Vamos ca�ar o Thanos!!!*********" << endl ;
	cout << "*************************" << endl ;
	
	float n,t;
	system("cls");
	
	cout << "selecione o nivel:" <<endl;
	cout << "1= F�cil:" <<endl;
	cout << "2= M�dio:" <<endl;
	cout << "3= Dif�cil:" <<endl;
		cin >> n;
	if( n ==1){
		t = 15;
			cout << "A dificuldade selecionada foi F�cil, voc� tem" <<t<< "tentativas" << endl ;
	}
	else if (n ==2){
		t = 10;
			cout << "A dificuldade selecionada foi M�dio, voc� tem" <<t<< "tentativas" << endl ;
	}
	else if (n ==3){
		t = 4;
			cout << "A dificuldade selecionada foi Dif�cil, voc� tem" <<t<< "tentativas" << endl ;
	}
	
	else{
		cout << "A dificuldade � entre 1 e 3 paia�o, game over" << endl ;
	}
	
	system ("pause");
	system ("cls");
	
	for ( int i=8; i<=t; i++) ;
}
	
	
	
	
