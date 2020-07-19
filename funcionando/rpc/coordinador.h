#ifndef COORDINADOR_H
#define COORDINADOR_H
// Funcion para verificar si un archivo/carpeta es valido
// Recibe un tipo (0=carpeta,1=archivo), un nombre y la ubicacion del nodo actual
// Retorna 0=falso, 1=verdadero y 2=tipoInvalido
int esValido(char tipo, char* Nombre, char* Ubicacion);

// Funcion encargada del LS
// Recibe una ubicacion (carpeta actual)
// Retorna un string con todos los elementos en la carpeta
char* funcionListar(char* Direccion);

// Funcion para retornar la IP en la que se encuentra un archivo
// Recibe el nombre de un archivo y la ubicacion actual del nodo
// Retorna un string con el IP del nodo que tiene el archivo
char* obtenerIP(char* Archivo, char* Ubicacion);
int carpetaVacia(char* Nombre);
#endif /* COORDINADOR_H */
