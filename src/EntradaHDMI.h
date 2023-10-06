/*
 * EntradaHDMI.h
 *
 *  Created on: 05/10/2023
 *      Author: algo2
 */

#ifndef ENTRADAHDMI_H_
#define ENTRADAHDMI_H_

class EntradaHDMI {
private:
	bool esta_activa;
	int usos;
public:
	/*
	 * pre:
	 * pos:inicializa la entrada como "desactivada" y su contador de usos en 0
	 */
	EntradaHDMI();
	/*
	 * pre:
	 * pos:
	 */
	virtual ~EntradaHDMI();
	/*
	 * pre:
	 * pos: devuelve si esa entrada esta activa o no
	 */
	bool estaActiva();
	/*
	 * pre:el atributo esta_activa es false
	 * pos:cambia el atrubuto de false a true
	 */
	void desactivar();
	/*
	 * pre:el atributo esta_activa es true
	 * pos:cambia el atrubuto de true a false
	 */
	void activar();
	/*
	 * pre:
	 * pos:devuelve la cantidad de usos de la entrada HDMI
	 */
	int vecesUsada();
};

#endif /* ENTRADAHDMI_H_ */
