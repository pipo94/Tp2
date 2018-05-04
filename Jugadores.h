#ifndef __JUGADORES__H__
#define __JUGADORES__H__
Jugador:
// #Nombre de jugador
// - TERRENO arreglo de parcelas
// - Creditos
// - Turnos Restantes
// - Almacen (clase)
// - Tanque de Agua (clase)

// 	Metodos:

// 	conocerAccion(); (Apunta a parcela)
			
// 	Una de las dos: 
// 	+ actualizarTerreno();	
// 	+ analizarTurno();

// 	To do:
// 	+ comprarTerreno();
// 	+ venderTerreno();
class Jugadores{

private:
	string nombre;
	Terreno terreno;
	int creditos;
	int turnos restantes;
	Almacen almacen;
	Tanque	tanque;

public:
	Parcela preguntarYRealizarAccion();	
	Terreno actualizarTerreno(terreno);
	// comprarTerreno();
	// venderTerreno();

};


#endif