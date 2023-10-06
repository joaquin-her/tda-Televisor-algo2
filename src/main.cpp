/*
 * main.cpp
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

/*
 * DISEÑAR LA ESPECIFICACION E IMPLEMENTAR EL TDA TELEVISOR-
 * Debe proveer operaciones para:
 * 		- crear el televisor recibiendo como parametro la cantidad de entradas HDMI adicionales **
 * 		- activar y desactivar una entrada HDMI
 * 		- seleccionar una entrada
 * 		- todo pasar al siguiente canal (+), pasar al anterior (-) y seleccionar un canal directo (con el
 * 	numero como parametro)
 * 		- todo devolver la entrada mas usada
 *
 * REGLAS:
 * 		- un televisor tiene entrada de cable para 140 canales
 * 		- tiene capacidad para n entradas HDMI
 * 		- no puede cambiar de canal si no esta en la entrada de cable
 */

#include "Televisor.h"
#include <iostream>
using namespace std;

int main() {
	Televisor* tele1 = new Televisor(2);
	tele1->getEntrada(1)->activar();
	tele1->getEntrada(1)->desactivar();
	tele1->getEntrada(1)->activar();
	cout <<"Se creó el objeto Televisor con "<< tele1->getCantidadEntradas()<<" entradas\n";
	if (tele1->estaEncendido()){
		tele1->cambiarCanal(24);
		tele1->cambiarArriba();
		tele1->cambiarArriba();
		tele1->cambiarArriba();
		if (tele1->canalActual() == 27){
			cout << "El canal actual es el 27";
		}else{
			cout << "El canal actual no es el 27";
		}
	}

	delete tele1;
}


