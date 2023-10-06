/*
 * Televisor.cpp
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

#include "Televisor.h"
#include "EntradaHDMI.h"
#include "Vector.h"

Televisor::Televisor( int cantidad) {
	this->cantidad_entradas = cantidad;
	this->entradas_hdmi = new Vector<EntradaHDMI*>(cantidad);
	for (int i = 1; i <= cantidad ; i++){
		this->entradas_hdmi->setDato(i,new EntradaHDMI);
	}
	this->encendido = true;
	this->indice_canal = 1;
}

Televisor::~Televisor() {
	delete this->entradas_hdmi;
}
void Televisor::validarEncendido(){
	if (this->encendido){
		return;
	}else{
		throw "El televisor está apagado";
	}
}
bool Televisor::estaEncendido(){
	return this->encendido;
}
EntradaHDMI* Televisor::getEntrada(int indice){
	return this->entradas_hdmi->getDato(indice);
}

int Televisor::getCantidadEntradas(){
	return this->cantidad_entradas;
}
int Televisor::canalActual(){
	this->validarEncendido();
	return this->indice_canal;
}
void Televisor::cambiarArriba(){
	this->validarEncendido();
	if (this->indice_canal == 140){
		this->indice_canal = 1;
	}else{
		this->indice_canal += 1;
	}
}
void Televisor::cambiarAbajo(){
	this->validarEncendido();
	if (this->indice_canal == 1){
		this->indice_canal = 140;
	}else{
		this->indice_canal -= 1;
	}
}

void Televisor::cambiarCanal(int canal){
	this->estaEncendido();
	this->indice_canal = canal;
}

