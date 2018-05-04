#ifndef __PARCELA__H__
#define __PARCELA__H__
/*#numero de parcela
- Cultivo (clase) // Cuando sea V O R cambia el nombre
- (bool) Regada
	
	metodos:
	+ bool cultivar(fila, columnas);
	+ bool regar(fila, columna);
	+ bool almacenar(fila, columna);
	+ bool vender(fila, columna);
*/

class Parcela{
private:
	Cultivo cultivo;
	bool regada;

public:
	//Cada accion debe imprimir si fue realizada con exito o no
	void cultivar(fila,columna);
	void regar(fila,columna);
	void almacenar(fila,columna);
	void vender(fila,columna);

};


#endif