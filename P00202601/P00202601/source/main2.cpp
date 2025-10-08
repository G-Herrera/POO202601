#include "Prerequisites.h"
#include "ProgrammingPatterns/MiSingleton.h"
#include "ProgrammingPatterns/RegistrosDeActividades.h"
#include "ProgrammingPatterns/FactoryMethod.h"
#include "ProgrammingPatterns/Vehiculo.h"

//Inicializacion del puntero estatico a la instancia
MiSingleton* MiSingleton::instancia = nullptr;
RegistroDeActividades* RegistroDeActividades::instance = nullptr;

int main() {
	//Aqui estamos creando un puntero a la unica instancia de la clase singleton, usamos
	//:: porque el metodo es estatico y asi es como se accede a metodos estaticos
	MiSingleton* singleton1 = MiSingleton::getInstancia();
	singleton1->setData(42);

	std::cout << "Valor desde singleton1: " << singleton1->getData() << std::endl;

	MiSingleton* singleton2 = MiSingleton::getInstancia();
	std::cout << "Valor desde singleton2: " << singleton2->getData() << std::endl;
	std::cout << "Valor desde singleton1: " << singleton1->getData() << std::endl;

	//Ejercicio Registro de Actividades

	RegistroDeActividades* registro1 = RegistroDeActividades::getInstance();
	registro1->registrarActividad("Inicio de sesion");
	std::cout << "Se ha agregado una actividad desde registro1" << std::endl;

	RegistroDeActividades* registro2 = RegistroDeActividades::getInstance();
	std::cout << "Mostrando actividades registradas desde registro2:" << std::endl;
	for (const auto& actividad : registro2->getActividades()) {
		std::cout << actividad << std::endl;
	}

	//Ejercicio Factory Method}
	Fabrica* fabrica = new FabricaA(); //Fabrica --> Genera  a Tesla (fabricaA)}
	Producto* producto = fabrica -> crearProducto(); //Producto --> Tesla (ProductoA)
	producto->operacion();

	delete producto;
	delete fabrica;

	//Ejercicio Patron de Diseño Factory Method con Vehiculos
	std::cout << "Patron de Diseño Factory Method con Vehiculos" << std::endl;
	std::cout << "Creando instancia de coche.." << std::endl;
	FactoriaVehiculos* factoriaCoches = new FactoriaCoches();
	Vehiculo* coche = factoriaCoches->crearVehiculo();
	coche->descripcion();

	std::cout << "Creando instancia de bicicleta.." << std::endl;
	FactoriaVehiculos* factoriaBicicletas = new FactoriaBicicletas();
	Vehiculo* bicicleta = factoriaBicicletas->crearVehiculo();
	bicicleta->descripcion();

	std::cout << "Mostrando el vehiculo abstracto" << std::endl;
	Vehiculo* vehiculo = new Vehiculo();
	vehiculo->descripcion();

	delete coche;
	delete factoriaCoches;
	delete bicicleta;
	delete factoriaBicicletas;
	delete vehiculo;

	return 0;
}