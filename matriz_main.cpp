#include <iostream>
#include "matriz.h"

int main(int argc, char* argv[]){
  Matriz a(2,3);
  Matriz b(3,2);

  a.Matriz::setValor(2,0,0);
  a.Matriz::setValor(3,1,0);
  a.Matriz::setValor(4,0,2);
  a.Matriz::setValor(1,0,1);
  a.Matriz::setValor(1,1,1);
  a.Matriz::setValor(5,1,2);

  b.Matriz::setValor(2,0,0);
  b.Matriz::setValor(1,1,0);
  b.Matriz::setValor(5,0,1);
  b.Matriz::setValor(1,1,1);
  b.Matriz::setValor(3,2,1);
  b.Matriz::setValor(4,2,0);

  std::cout<<"matriz a"<<std::endl;
  for(int i=0; i<a.getLinha();i++){
    for(int j=0; j<a.getColuna();j++){
      std::cout<<a.getValor(i,j)<<" ";
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;

  std::cout<<"matriz b"<<std::endl;
  for(int i=0; i<b.getLinha();i++){
    for(int j=0; j<b.getColuna();j++){
     std::cout<<b.getValor(i,j)<<" ";
    }
    std::cout<<std::endl;
  }
  std::cout<<std::endl;
  
  std::cout<<"matriz multiplicacao"<<std::endl;
  a.Matriz::multiplicar(a,b);

return 0;
}