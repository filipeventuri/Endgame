#include <iostream>
#include <string>

class funcionario{
  string nome;
  int idade;
  double peso;
  int experiencia; /* numero de viagens*/
  char estado;
  /* pensei em dividir em 3 estados (a,b,c) sendo 'c' o pior estado e 'a' o melhor estado, para assim tornar um pré requisito 
  a depender da previsão de duração da viagem*/
  
  public:
  
  funcionario(string _nome, int _idade, double _peso, char _estado);
  void incrementarExperiencia();
  void getEstado();
  void getExperiencia();
  void getPeso();
  
}