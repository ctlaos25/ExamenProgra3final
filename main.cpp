#include <iostream>
#include <fstream>
#include <math.h>
#include <list>
#include <vector>
#include "Evaluador.h"
using namespace std;

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 1 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Devuelve una direccion de memoria que apunte al apuntador "a"
int** obtenerApuntador(int*a)
{
    int **apuntador;
    apuntador= &a;
    return apuntador;
}

//Devuelve true si y solo si la primera letra de "cadena" es mayuscula
bool esMayuscula(char*cadena)
{
    if((int)cadena[0] >64 && (int)cadena[0] < 90)
        return true;
    else
        return false;
}



//Escribe el contendio del arreglo "valores" en el archivo con nombre "nombre_archivo" dado su tamano
void escribir(string nombre_archivo,int* valores, int tamano)
{
    ofstream out (nombre_archivo.c_str());
    for (int i=0; i<tamano;i++){
        out<<valores[i]<<endl;
        out.close();
    }
}

//Lee y devuelve el contenido del archivo con nombre "nombre_archivo" tal y como fue escrito en la funcion "escribir()"
int* leer(string nombre_archivo)
{
//    string* acum;
//    for(int x=0;x<nombre_archivo.size();x++)
//    {
//        acum+=nombre_archivo[x];
//    }
//    return acum.c_str();
}


//Selecciona y devuelve unicamente los valores pares de "mi_vector"
vector<int> seleccionarPares(vector<int>mi_vector)
{
    vector<int>respuesta;
    for(int i=0; i< mi_vector.size();i++){
        if((mi_vector[i]%2)==0){
            respuesta.push_back(mi_vector[i]);
        }
    }
    return respuesta;
}



//Devuelve verdadero si y solo si "mi_vector" es una succecion creciente de numeros naturales
//https://es.wikipedia.org/wiki/Sucesi%C3%B3n_matem%C3%A1tica#Sucesi.C3.B3n_creciente
bool esSuccecionMonotona(vector<int>mi_vector)
{
//    int numeroSucecion=mi_vector[0];
//    for(int i=0; i< mi_vector.size();i++){
//        if(numeroSucecion==(mi_vector[i+1]-mi_vector[i])){
//        if(mi_vector.size()==i){
//            return true;
//            }
//        }
//    }
//    return false;
}


//Invierte y devuelve el contenido de "lista"
template<typename T>
list<T> invertir(list<T>lista)
{
    list<T>respuesta;
//    respuesta= lista.reverse();
    return lista.reverse();
}

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 2 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Realizar las siguientes clases dado el diagrama adjunto

//**Gato**
//Constructor vacio: no hace nada
//getTipo(): devuelve "Gato"
//mauyar(): es virtual pura
//operator+=(): suma el parametro al atributo edad

//**Siames**
//Constructor: inicializa los atributos de clase dados los parametros
//getTipo(): devuelve "Siames"
//mauyar(): devuelve "meow"

//**Persa**
//Constructor: inicializa los atributos de clase dados los parametros
//getTipo(): devuelve "Persa"
//mauyar(): devuelve "miau"

///////////////////////////////////////////////////////////////////
////////////////////////////// Main ///////////////////////////////
///////////////////////////////////////////////////////////////////

void evaluar();
void evaluar2();

int main ()
{
    //Funcion evaluadora parte 1
    cout<<"Evaluador parte 1"<<endl<<"================="<<endl;
    evaluar();


    //Evaluacion parte 2
    //Descomentar para evaluar
    cout<<"Evaluador parte 2"<<endl<<"================="<<endl;
    evaluar2();

    return 0;
}


///////////////////////////////////////////////////////////////////////
///////////////////////////// Evaluador 2 /////////////////////////////
///////////////////////////////////////////////////////////////////////

void evaluar()
{
    double nota = evaluarEscondido();

    list<int>l1;
    l1.push_back(3);
    l1.push_back(7);
    l1.push_back(2);

    list<int>l2;
    l2.push_back(1);
    l2.push_back(2);

    list<int>l3;
    l3.push_back(100);
    l3.push_back(200);
    l3.push_back(300);
    l3.push_back(400);
    l3.push_back(500);

    list<int>l11=invertir(l1);
    list<int>l22=invertir(l2);
    list<int>l33=invertir(l3);

    cout<<"invertir():\t\t\t";
    if(getElement(l11,0)==2
       && getElement(l11,1)==7
       && getElement(l11,2)==3
       && getElement(l22,0)==2
       && getElement(l22,1)==1
       && getElement(l33,0)==500
       && getElement(l33,1)==400
       && getElement(l33,2)==300
       && getElement(l33,3)==200
       && getElement(l33,4)==100
        )
    {
        nota+=4;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/14"<<endl<<endl;
}

void evaluar2()
{
    double nota = 0;

//    cout<<"**Clase Siames**"<<endl;
//    cout<<"Test constructor:\t\t";
//    Siames clase1("roro",5,"azul");
//    Siames clase2("lola",7,"rojo");
//    Siames clase3("lolo",2,"verde");
//
//    if(clase1.nombre == "roro"
//        && clase1.edad == 5
//        && clase1.color == "azul"
//        && clase2.nombre == "lola"
//        && clase2.edad == 7
//        && clase2.color == "rojo"
//        && clase3.nombre == "lolo"
//        && clase3.edad == 2
//        && clase3.color == "verde"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getTipo():\t\t\t";
//
//    if(clase1.getTipo() == "Siames"
//        && clase2.getTipo() == "Siames"
//        && clase3.getTipo() == "Siames"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test operator+=():\t\t";
//    clase1+=5;
//    clase2+=1;
//    clase3+=2;
//    if(clase1.edad==10
//        && clase2.edad==8
//        && clase3.edad==4
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//
//
//
//
//    cout<<"**Clase Persa**"<<endl;
//    cout<<"Test constructor:\t\t";
//    Persa clase11("roro",5,"azul");
//    Persa clase22("lola",7,"rojo");
//    Persa clase33("lolo",2,"verde");
//
//    if(clase11.nombre == "roro"
//        && clase11.edad == 5
//        && clase11.color == "azul"
//        && clase22.nombre == "lola"
//        && clase22.edad == 7
//        && clase22.color == "rojo"
//        && clase33.nombre == "lolo"
//        && clase33.edad == 2
//        && clase33.color == "verde"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getTipo():\t\t\t";
//
//    if(clase11.getTipo() == "Persa"
//        && clase22.getTipo() == "Persa"
//        && clase33.getTipo() == "Persa"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test operator+=():\t\t";
//    clase11+=4;
//    clase22+=2;
//    clase33+=1;
//    if(clase11.edad==9
//        && clase22.edad==9
//        && clase33.edad==3
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }


    cout<<endl<<"Nota: "<<nota<<"/6"<<endl;
}
