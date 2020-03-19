#include "FuncionarioNaoExiste.h"
#include "OrcamentoEstourado.h"
#include "SistemaGerenciarFolha.h"
#include <iostream>
#include <string>

 std::string OrcamentoViavel (double orcamento, double valorFolha){

    if (orcamento < valorFolha){
        OrcamentoEstourado e = OrcamentoEstourado();
        throw e;  
    }else{
        std::cout << "Orcamento viavel" << std::endl;
    }
}

std::string FuncionarioExiste(){
    
}



