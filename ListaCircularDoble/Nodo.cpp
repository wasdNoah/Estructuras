#include "Nodo.h"
using namespace std;

Nodo::Nodo(int valor) {
	this->siguiente = NULL;
	this->anterior = NULL;
	this->valor = valor;
}

Nodo::~Nodo() {
	cout << "Nodo eliminado" << endl;
}

int Nodo::getValor() {
	return this->valor;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

Nodo* Nodo::getAnterior() {
	return this->anterior;
}

void Nodo::setSiguiente(Nodo* nodo) {
	this->siguiente = nodo;
}

void Nodo::setAnterior(Nodo* nodo) {
	this->anterior = nodo;
}