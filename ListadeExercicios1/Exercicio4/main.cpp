#include "Data.h"
#include <iostream>

using namespace std;

int main() {
	Data d1 = Data(29, 2, 2011);// --> Data inv�lida
	d1.getData();// Configura a data para 1/1/1

	Data d2 = Data();// --> Data v�lida
	d2.setDia(3);
	d2.setMes(2);
	d2.setAno(2012);
	d2.getData();//Mostra a data v�lida

	cout << d1.compara(d2) << endl;// Comparando, a data configurada � menor que a v�lida, retornando -1

	cout << d2.getMesExtenso(d2.getMes()) << endl;// D� o m�s por extenso de um dos objetos
}