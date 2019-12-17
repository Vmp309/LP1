#include "Horario.h"

using namespace std;

int main() {
	Horario h1 = Horario(); //horario qualquer posto
	h1.setHora(21);
	h1.setMinuto(35);
	h1.setSegundo(12);
	h1.getHorario(); // Obtenção do horario h1

	h1.setHorario(22, 12, 45); //Modificacao do horario h1
	h1.getHorario();

	Horario h2 = Horario(25, 67, 89);// horario invalido
	h2.getHorario(); //horario setado para modo default

	//para avancar o horario de h1
	h1.avancarHorario();
	h1.getHorario();

}