#pragma once
#include "Prerequisites.h"

class Producto
{
public:
	/**
	* @brief Constructor de la clase Producto
	* 
	* Este constructor inicializa un objeto de la clase Producto con los siguientes 
	*	parametros:
	* 
	* @param nombre Nombre del producto
	* @param codigo Codigo unico del producto
	* @param descripcion Descripcion del producto
	* @param categoria Categoria del producto
	* @param consumible Indica si el producto es consumible
	* @param fechaEmpaque Fecha de empaque del producto
	* @param fechaCaducidad Fecha de caducidad del producto
	* @param peso Peso del producto
	* @param precio Precio del producto
	* @param contenido Contenido del producto
	* @param marca Marca del producto
	* @param modelo Modelo del producto
	*/
	Producto(std::string nombre, int codigo, std::string descripcion,
		CATEGORIAPRODUCTO categoria, bool consumible, std::string fechaEmpaque,
		std::string fechaCaducidad, double peso, double precio, std::string contenido,
		std::string marca, std::string modelo) : m_nombre(nombre), m_codigo(codigo),
		m_descripcion(descripcion), m_categoria(categoria), m_consumible(consumible),
		m_fechaEmpaque(fechaEmpaque), m_fechaCaducidad(fechaCaducidad), m_peso(peso),
		m_precio(precio), m_contenido(contenido), m_marca(marca), m_modelo(modelo) {
	};
	~Producto()=default;

	//Getters
	std::string 
	getNombre() const {
		return m_nombre;
	};
	int 
	getCodigo() const {
		return m_codigo;
	};
	std::string 
	getDescripcion() const {
		return m_descripcion;
	};
	CATEGORIAPRODUCTO 
	getCategoria() const {
		return m_categoria;
	};
	bool isConsumible() const {
		return m_consumible;
	};
	std::string 
	getFechaEmpaque() const {
		return m_fechaEmpaque;
	};
	std::string 
	getFechaCaducidad() const {
		return m_fechaCaducidad;
	};
	double 
	getPeso() const {
		return m_peso;
	};

	double getPrecio() const {
		return m_precio;
	};

	std::string getContenido() const {
		return m_contenido;
	};

	std::string getMarca() const {
		return m_marca;
	};

	std::string getModelo() const {
		return m_modelo;
	};

	//Setters
	void 
	setNombre(const std::string& nombre) {
		m_nombre = nombre;
	};
	void 
	setCodigo(int codigo) {
		m_codigo = codigo;
	};
	void 
	setDescripcion(const std::string& descripcion) {
		m_descripcion = descripcion;
	};
	void 
	setCategoria(CATEGORIAPRODUCTO categoria) {
		m_categoria = categoria;
	};
	void 
	setConsumible(bool consumible) {
		m_consumible = consumible;
	};
	void 
	setFechaEmpaque(const std::string& fechaEmpaque) {
		m_fechaEmpaque = fechaEmpaque;
	};
	void 
	setFechaCaducidad(const std::string& fechaCaducidad) {
		m_fechaCaducidad = fechaCaducidad;
	};
	void 
	setPeso(double peso) {
		m_peso = peso;
	};
	void 
	setPrecio(double precio) {
		m_precio = precio;
	};
	void 
	setContenido(const std::string& contenido) {
		m_contenido = contenido;
	};
	void 
	setMarca(const std::string& marca) {
		m_marca = marca;
	};
	void 
	setModelo(const std::string& modelo) {
		m_modelo = modelo;
	};


private:
	std::string m_nombre;
	int m_codigo;
	std::string m_descripcion;
	CATEGORIAPRODUCTO m_categoria;
	bool m_consumible;
	std::string m_fechaEmpaque; //DD/MM/AAAA
	std::string m_fechaCaducidad; //DD/MM/AAAA
	double m_peso; //en kg
	double m_precio; //en MXN
	std::string m_contenido; //detalles del contenido del producto
	std::string m_marca;
	std::string m_modelo;
};

