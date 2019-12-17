#include "Horario.h"

//Construtores
Horario::Horario() {};
Horario::Horario(int hr, int min, int seg) {
	if (hr > 23 | min > 59 | seg > 59) {
		setHorario(0, 0, 0);
	}
	else {
		setHorario(hr, min, seg);
	}

};


//Fun��es set
void Horario::setHora(int hr) {
	hora = hr;
}

void Horario::setMinuto(int min) {
	minuto = min;
}

void Horario::setSegundo(int seg) {
	segundo = seg;
}

void Horario::setHorario(int hr, int min, int seg) {
	setHora(hr);
	setMinuto(min);
	setSegundo(seg);
}


//Fun��es get
int Horario::getHora() {
	return hora;
};

int Horario::getMinuto() {
	return minuto;
}

int Horario::getSegundo() {
	return segundo;
}

void Horario::getHorario() {
	if (hora < 10 && minuto < 10 && segundo < 10) {
		cout << "0" << hora << ":" << "0" << minuto << ":" << "0" << segundo << endl;
	}
	if (hora < 10 && minuto < 10 && segundo >= 10) {
		cout << "0" << hora << ":" << "0" << minuto << ":" << segundo << endl;
	}
	if (hora < 10 && minuto >= 10 && segundo >= 10) {
		cout << "0" << hora << ":" << minuto << ":" << segundo << endl;
	}
	if (hora >= 10 && minuto >= 10 && segundo >= 10) {
		cout << hora << ":" << minuto << ":" << segundo << endl;
	}
}


//M�todos
void Horario::avancarHorario() {
	if (getSegundo() < 59 && getMinuto() < 59 && getHora() < 23) {
		setSegundo(getSegundo() + 1);
	}
	else if (getSegundo() == 59 && getMinuto() < 59 && getHora() < 23) {
		setSegundo(0);
		setMinuto(getMinuto() + 1);
	}

	else if (getSegundo() == 59 && getMinuto() == 59 && getHora() < 23) {
		setSegundo(0);
		setMinuto(0);
		setHora(getHora() + 1);
	}
	else if (getSegundo() == 59 && getMinuto() == 59 && getHora() == 23) {
		setSegundo(0);
		setMinuto(0);
		setHora(0);
	}

}
