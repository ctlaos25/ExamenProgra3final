#include <iostream>
#include <fstream>
#include <math.h>
#include <list>
#include <vector>
using namespace std;

double evaluarEscondido();

int** obtenerApuntador(int*a);
bool esMayuscula(char*cadena);
void escribir(string nombre_archivo,int* valores, int tamano);
int* leer(string nombre_archivo);
bool esSuccecionMonotona(vector<int>mi_vector);
vector<int> seleccionarPares(vector<int>mi_vector);

//Extra
int getElement(list<int>mylist,int pos);
