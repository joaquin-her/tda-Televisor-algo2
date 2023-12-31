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
	this->encendido = false;
	this->indice_canal = 1;
}

Televisor::~Televisor() {
	delete this->entradas_hdmi;
}
void Televisor::encender(){
	if (!this->encendido){
		this->encendido = true;
	}else{
		throw "El televisor ya está encendido";
	}
}
void Televisor::apagar(){
	this->validarEncendido();
	this->encendido = false;
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

EntradaHDMI* Televisor::entradaMasUsada(){
	if (this->cantidad_entradas == 0){
		throw "El televisor no tiene entradas HDMI. Solo tiene cable";
	}else{
		EntradaHDMI* entradaMasUsada = this->entradas_hdmi->getDato(1);
		for (int indice = 1; indice< this->cantidad_entradas ;indice++){
			if (this->entradas_hdmi->getDato(indice)->vecesUsada()> entradaMasUsada->vecesUsada()){
				entradaMasUsada = this->entradas_hdmi->getDato(indice);
			}
		}
		return entradaMasUsada;
	}
}
