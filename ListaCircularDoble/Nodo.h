#pragma once
#include <iostream>
class Nodo
{
private:
	Nodo* anterior;
	Nodo* siguiente;
	int valor;
	
public:
	Nodo(int valor);
	~Nodo();

	Nodo* getSiguiente();
	Nodo* getAnterior();
	void setSiguiente(Nodo* nodo);
	void setAnterior(Nodo* nodo);
	int getValor();

};

