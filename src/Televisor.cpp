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
	// TODO Auto-generated constructor stub
	this->cantidad_entradas = cantidad;

	this->entradas_hdmi = new Vector<EntradaHDMI*>(cantidad);
	for (int i = 1; i <= cantidad ; i++){
		this->entradas_hdmi->setDato(i,new EntradaHDMI);
	}
}

Televisor::~Televisor() {
	// TODO Auto-generated destructor stub
	delete this->entradas_hdmi;
}

EntradaHDMI* Televisor::getEntrada(int indice){
	return this->entradas_hdmi->getDato(indice);
}
