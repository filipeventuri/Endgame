#include "cliente.hpp"
#include "funcionario.hpp"
#include "onibus.hpp"
#include <vector>

class cadastro{
  

  vector<cliente> cliente;
  vector<funcionario> funcionario;
  vector<onibus> onibus;
 
  
  public:
  
  void adicionarFuncionario();
  void adicionarCliente();
  void adicionarOnibus();
  
};
