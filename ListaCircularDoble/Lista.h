#pragma once
#include "Nodo.h";

class Lista
{
private:
	Nodo* cabeza;

public:
	Lista();
	~Lista();

	void insertar(Nodo* nuevo);
	void eliminar(int val);
	Nodo* buscar();
	void imprimir();

};

