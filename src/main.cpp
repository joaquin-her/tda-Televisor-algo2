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
 * 		- pasar al siguiente canal (+), pasar al anterior (-) y seleccionar un canal directo (con el
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

void mostrarEncendido(Televisor* tele){
	if (tele->estaEncendido()){
		cout << "El televisor está encendido\n";
	}else{
		cout << "El televisor está apagado\n";
	}
}
void mostrarCanal(Televisor* tele){
	cout << "El canal actual es el " << tele->canalActual()<<endl;
}
void mostrarEntradas(Televisor* tele){
	cout <<"El objeto tiene "<< tele->getCantidadEntradas()<<" entradas\n";
}
int main() {
	Televisor* tele1 = new Televisor(2);
	mostrarEntradas(tele1);
	tele1->getEntrada(1)->activar();
	tele1->getEntrada(1)->desactivar();
	tele1->getEntrada(1)->activar();
	tele1->encender();
	mostrarEncendido(tele1);
	if (tele1->estaEncendido()){
		tele1->cambiarCanal(24);
		mostrarCanal(tele1);

		tele1->cambiarArriba();
		mostrarCanal(tele1);

		tele1->cambiarArriba();
		tele1->cambiarArriba();
		mostrarCanal(tele1);
	}
	tele1->apagar();
	mostrarEncendido(tele1);
	delete tele1;
}


