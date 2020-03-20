#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#define MAX 50

using namespace std;

int main()
{
    fstream arquivo("arquivo.txt", ios::in | ios::out);
    string nome;
    string nome_lido;

    ///Escrevendo qualquer coisa no arquivo.txt

    if (!arquivo.is_open()){
        cout << "arquivo.txt could not be opened!" << endl;
    }else{
        int opc = 0;
        while (opc == 0){
            cout << "Digite um nome: " << endl;
            getline(cin, nome);

            arquivo << nome << "\n";

            cout << "Deseja digitar mais um nome?" << endl << "[0]Sim" << endl << "[1]Nao" << endl;
            cin >> opc;
            cin.ignore();
        }
    }


   ///Lendo o arquivo.txt
   vector <string> nomes[MAX];
   int i = 0;
    while (getline(arquivo, nome_lido)){
        nomes[i].push_back(nome_lido);
        i++;
    }

arquivo.close();

    int Numero_nomes_gravados = i + 1;
    int contador = 0;


   ///Gravando em copia.txt
   fstream copiar("copia.txt", ios::out);
    if (!copiar.is_open()){
        cout << "copia.txt could not be opened!" << endl;
    }else{
        while (contador < Numero_nomes_gravados){
            copiar << nomes[contador] << "\n";
            contador++;
        }
    }
    copiar.close();

    return 0;
}
