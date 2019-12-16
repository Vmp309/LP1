#include "Data.h"
#include <iostream>

using namespace std;

int main() {
	Data d1 = Data(29, 2, 2011);// --> Data inválida
	d1.getData();// Configura a data para 1/1/1

	Data d2 = Data();// --> Data válida
	d2.setDia(3);
	d2.setMes(2);
	d2.setAno(2012);
	d2.getData();//Mostra a data válida

	cout << d1.compara(d2) << endl;// Comparando, a data configurada é menor que a válida, retornando -1

	cout << d2.getMesExtenso(d2.getMes()) << endl;// Dá o mês por extenso de um dos objetos
}