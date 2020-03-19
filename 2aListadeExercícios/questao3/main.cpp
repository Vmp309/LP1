#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExiste.h"
#include "OrcamentoEstourado.h"
#include "SistemaGerenciarFolha.h"
#include "FuncoesExtras.h"

int main (){

    double orcamento = 100000; //Orcamento viável
    double orcamento2 = 1; //Orcamento não viável

    //Criando um assalariado
    Assalariado a1 = Assalariado();
    a1.setNome ("Jailton Mendes");
    a1.setMatricula (123456789);
    a1.setSalario(5500);
    std::cout << "Nome do assalariado: " << a1.getNome() << std::endl;
    std::cout << "Matricula do assalariado: " << a1.getMatricula() << std::endl;
    std::cout << "Salario do assalariado: " << a1.getSalario() << std::endl;
    

    //Criando um horista
    Horista h1 = Horista();
    h1.setNome("Joana Almeida");
    h1.setMatricula(147258369);
    h1.setSalarioHora(20);
    h1.setHorasTrabalhadas(120);
    std::cout << "Nome do horista: " << h1.getNome() << std::endl;
    std::cout << "Matricula do horista: " << h1.getMatricula() << std::endl;
    std::cout << "Salario do horista: " << h1.calcularSalario() << std::endl;
    
    
    //Criando um comissionado
    Comissionado c1 = Comissionado();
    c1.setNome("Johnatas Machado");
    c1.setMatricula(986753421);
    c1.setPercentalComissao(25);
    c1.setVendasSemanais(1200);
    std::cout << "Nome do comissionado: " << c1.getNome() << std::endl;
    std::cout << "Matricula do comissionado: " << c1.getMatricula() << std::endl;
    std::cout << "Salario do comissionado: " << c1.calcularSalario() << std::endl;

SistemaGerenciarFolha s = SistemaGerenciarFolha();
    s.setFuncionarios(a1);
    s.setFuncionarios(h1);
    s.setFuncionarios(c1);

    s.consultaSalarioFuncionario();

    std::cout << "Valor total da folha: " << s.calculaValorTotalFolha() << std::endl;


    try {
        OrcamentoViavel(orcamento, s.calculaValorTotalFolha());//Orcamento viável
        OrcamentoViavel(orcamento2, s.calculaValorTotalFolha());//Orcamento estourado
        
    }catch (OrcamentoEstourado e){
        std::cout << e.msg_erro();
    }

    

    return 0;
}