#include "Data.h"
#include <iostream>

using namespace std;

//Construtor sem parâmetro nenhum
Data::Data() {};

//Implementação das funções set

void Data::setDia(int day) {
	dia = day;
};

void Data::setMes(int month) {
	mes = month;
};

void Data::setAno(int year) {
	ano = year;
};


//Construtor com dia, mês e ano como parâmetros
Data::Data(int day, int month, int year) {
	/*void setDia(int day);
	void setMes(int month);
	void setAno(double year);*/
	if (month == 2) {
		if (day >= 29 && year % 4 != 0) { // Apenas fevereiro
			setDia(1);
			setMes(1);
			setAno(1);
		}
	}

	else if (month != 4 && month != 6 && month != 9 && month != 11) { // Meses que possuem 31 dias
		if (day > 31) {
			setDia(1);
			setMes(1);
			setAno(1);
		}
	}
	else {
		if (day > 30) {
			setDia(1);
			setMes(1);
			setAno(1);
		}
	}
};



//Implementação das funções get e métodos
void Data::getData() {
	cout << dia << "/" << mes << "/" << ano << endl;
};

int Data::getDia() {
	return dia;
};

int Data::getMes() {
	return mes;
};

int Data::getAno() {
	return ano;
};

int Data::compara(Data ob2) {
	if (getAno() == ob2.getAno() && getMes() == ob2.getMes() && getDia() == ob2.getDia()) {
		return 0;
	}
	else if (getAno() > ob2.getAno()) {
		return 1;
	}
	else if (getAno() < ob2.getAno()) {
		return -1;
	}
	else if (getAno() == ob2.getAno()) {
		if (getMes() > ob2.getMes()) {
			return 1;
		}
		else if (getMes() < ob2.getMes()) {
			return -1;
		}
	}
	else if (getMes() == ob2.getMes()) {
		if (getDia() > ob2.getDia()) {
			return 1;
		}
		else if (getDia() < ob2.getDia()) {
			return -1;
		}
	}
};


bool Data::isBissexto(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else {
		return false;
	}
};


string Data::getMesExtenso(int month) {
	switch (month)
	{
	case 1:
		return "Janeiro";
		break;
	case 2:
		return "Fevereiro";
		break;
	case 3:
		return "Marco";
		break;
	case 4:
		return "Abril";
		break;
	case 5:
		return "Maio";
		break;
	case 6:
		return "Junho";
		break;
	case 7:
		return "Julho";
		break;
	case 8:
		return "Agosto";
		break;
	case 9:
		return "Setembro";
		break;
	case 10:
		return "Outubro";
		break;
	case 11:
		return "Novembro";
		break;
	case 12:
		return "Dezembro";
		break;
	}
}