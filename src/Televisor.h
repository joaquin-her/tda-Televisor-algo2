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
	int canales_cable[140];

public:
	/*
	 * pre:
	 * pos:crea un objeto televisor con n cantidad de EntradasHDMI
	 */
	Televisor(int cantidad);
	/*
	 * pre:
	 * pos:elimina el objeto Televisor y su contenido
	 */
	virtual ~Televisor();
	/*
	 * pre: se aplica sobre el objeto Televisor con un indice menor a la
	 * cantidad de EntradasHDMI
	 * pos: devuelve el Objeto EntradaHDMI
	 */
	EntradaHDMI* getEntrada(int indice);
	/*
	 * pre:
	 * pos:
	 */
	//cambiar_canal(char direccion);
	/*
	 * pre:
	 * pos:
	 */
	//saltar_a_canal(int canal);
};

#endif /* TELEVISOR_H_ */
