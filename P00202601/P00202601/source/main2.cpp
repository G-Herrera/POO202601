#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"
#include "ProgrammingPatterns/Composite/SistemaArchivo.h"
#include "ProgrammingPatterns/Composite/SistemaCarpeta.h"


int main() {
	SistemaArchivo* archivo1 = new SistemaArchivo("documento1.txt");
	SistemaArchivo* archivo2 = new SistemaArchivo("imagen1.png");
	SistemaCarpeta* carpeta1 = new SistemaCarpeta();
	carpeta1->agregarSistema(archivo1);
	carpeta1->agregarSistema(archivo2);

	carpeta1->mostrarInfo();

	delete archivo1;
	delete archivo2;
	delete carpeta1;

	return 0;
}