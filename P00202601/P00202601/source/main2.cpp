#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/ProxyImagen.h"


int main() {
	ProxyImagen* imagen = new ProxyImagen();
	imagen->mostrarImagen();

	delete imagen;

	return 0;
}