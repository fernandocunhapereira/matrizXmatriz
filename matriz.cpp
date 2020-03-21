#include <iostream>
#include "matriz.h"

Matriz::Matriz(int l_,int c_){
  l=l_;
  c=c_;
  
  mat=new int*[l_];
 
  for(int i=0;i<l_;i++){
    mat[i]=new int[c_];
  }

  for(int i=0;i<l_;i++){
    for(int j=0;j<c_;j++){
      mat[i][j]=0;
    }
  }
}

int Matriz::getLinha(){
  return l;
}

int Matriz::getColuna(){
  return c;
}

int Matriz::getValor(int l_, int c_){
  return mat[l_][c_];
}

void Matriz::setValor(int val_ ,int l_, int c_){
  mat[l_][c_]=val_;
}

Matriz Matriz::multiplicar(Matriz x_, Matriz y_){
  Matriz z(x_.Matriz::getLinha(),y_.Matriz::getColuna());
  for(int i=0;i<x_.Matriz::getLinha();i++){
    for(int j=0;j<y_.Matriz::getColuna();j++){
      for(int k=0;k<x_.Matriz::getColuna();k++){
        z.Matriz::setValor(z.Matriz::getValor(i,j)+(x_.Matriz::getValor(i,k)*y_.Matriz::getValor(k,j)),i,j);
      }
    }
  }
  for(int i=0; i<z.getLinha();i++){
    for(int j=0; j<z.getColuna();j++){
      std::cout<<z.getValor(i,j)<<" ";
    }
  std::cout<<std::endl;
  }
  return z;
}

Matriz::~Matriz(){
delete[] mat;
}