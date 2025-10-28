#include "Prerequisites.h"
#include "ProgrammingPatterns/Proxy/Proxy.h"


int main() {
	Proxy* proxy = new Proxy();
	proxy->Request();
	
	delete proxy;

	return 0;
}