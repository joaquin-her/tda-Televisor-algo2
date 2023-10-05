/*
 * Televisor.h
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

#ifndef TELEVISOR_H_
#define TELEVISOR_H_

class Televisor {
private:
	int cantidad_entradas_hdmi;
	int canales_cable[140];

public:
	/*
	 * pre:
	 * pos:
	 */
	Televisor();
	/*
	 * pre:
	 * pos:
	 */
	virtual ~Televisor();

	/*
	 * pre:
	 * pos:
	 */
	cambiar_canal(char direccion);
	/*
	 * pre:
	 * pos:
	 */
	saltar_a_canal(int canal);
};

#endif /* TELEVISOR_H_ */
