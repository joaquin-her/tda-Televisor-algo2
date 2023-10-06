/*
 * Televisor.h
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

#ifndef TELEVISOR_H_
#define TELEVISOR_H_
#include "Vector.h"
#include "EntradaHDMI.h"
class Televisor {
private:
	int cantidad_entradas;
	Vector <EntradaHDMI* > * entradas_hdmi;
	int indice_canal;
	bool encendido;
	/*
	 * pre:
	 * pos: arroja un error si el televisor está apagado
	 */
	void validarEncendido();

public:
	/*
	 * pre: la cantidad de entradas ingresadas no es negativa
	 * pos:crea un objeto televisor con n cantidad de EntradasHDMI y 140 canales de cable
	 */
	Televisor(int cantidad);
	/*
	 * pre:
	 * pos:elimina el objeto Televisor y su contenido
	 */
	virtual ~Televisor();
	/*
	 * pre: el televisor está apagado
	 * pos: enciende el televisor
	 */
	void encender();
	/*
	 * pre: el televisor está encendido
	 * pos: apaga el televisor
	 */
	void apagar();

	/*
	 * pre: el indice ingresado esta entre 1 y la cantidad de entradas
	 * pos: devuelve un puntero a el Objeto EntradaHDMI en ese indice
	 */
	EntradaHDMI* getEntrada(int indice);
	/*
	 * pre:
	 * pos: devuelve un int con la cantidad de entradas que tiene el televisor
	 */
	int getCantidadEntradas();
	/*
	 * pre: la television esta encendida
	 * pos: devuelve un int con el valor del canal mostrado en la television
	 *
	 */
	int canalActual();
	/*
	 * pre:
	 * pos: cambia el canal hacia arriba incrementando el indice del canal en 1
	 *
	 */
	void cambiarArriba();
	/*
	 * pre:
	 * pos: cambia el canal hacia arriba incrementando el indice del canal en 1
	 *
	 */
	void cambiarAbajo();
	/*
	 * pre: el televisor está encendido y el canal esta entre 1 y todo 140
	 * pos: cambia el canal hacia ese indice
	 */
	void cambiarCanal(int direccion);
	/*
	 * pre:
	 * pos: devuelve el booleano de su atributo "encendido"
	 */
	bool estaEncendido();

};

#endif /* TELEVISOR_H_ */
