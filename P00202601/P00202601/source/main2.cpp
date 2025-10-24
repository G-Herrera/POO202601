#include "Prerequisites.h"
#include "ProgrammingPatterns/Composite/Sistema.h"
#include "ProgrammingPatterns/Composite/SistemaArchivo.h"
#include "ProgrammingPatterns/Composite/SistemaCarpeta.h"


int main() {
	SistemaCarpeta* raiz = new SistemaCarpeta("Raiz");
	raiz->agregarSistema(new SistemaArchivo("Archivo1.docs"));
	raiz->agregarSistema(new SistemaArchivo("Archivo2.docs"));

	SistemaCarpeta* subCarpeta = new SistemaCarpeta("SubCarpeta1");
	subCarpeta->agregarSistema(new SistemaArchivo("Archivo3.docs"));
	raiz->agregarSistema(subCarpeta);
	raiz->mostrarInfo();

	delete raiz;
	delete subCarpeta;

	return 0;
}