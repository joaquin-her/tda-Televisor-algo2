/*
 * EntradaHDMI.cpp
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

#include "EntradaHDMI.h"

EntradaHDMI::EntradaHDMI() {
	this->esta_activa = false;
	this->usos = 0;
}

EntradaHDMI::~EntradaHDMI() {
}

bool EntradaHDMI::estaActiva(){
	return this->esta_activa;
}

void EntradaHDMI::desactivar(){
	if (this->esta_activa){
		this->esta_activa = false;
	}else{
		throw "La entrada HDMI ya está desactivada";
	}
}

void EntradaHDMI::activar(){
	if (!this->esta_activa){
		this->esta_activa = true;
		this->usos += 1;
	}else{
		throw "La entrada HDMI ya está activada";
	}
}

int EntradaHDMI::vecesUsada(){
	return this->usos;
}
