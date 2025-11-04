#pragma once
//Clase que define la interfaz comun entre el SujetoReal y el Proxy

class 
InterfazImagen {
public:
	InterfazImagen()  = default;
	~InterfazImagen() = default;

	virtual void mostrarImagen() = 0;
};