#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
  int l;
  int c;
public:
  int **mat;
  int getLinha();
  int getColuna();
  Matriz(int l_,int c_);
  int getValor(int l_, int c_);
  void setValor(int val_, int l_, int c_);
  Matriz multiplicar(Matriz x_, Matriz y_);
  ~Matriz();
};

#endif