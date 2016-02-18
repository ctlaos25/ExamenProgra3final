#include "Evaluador.h"

bool compare(int* arr1,int* arr2,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr1[i]!=arr2[i])
            return false;
    }
    return true;
}

int getElement(list<int>mylist,int pos)
{
    list<int>::iterator i=mylist.begin();
    for(int j=0;j<pos;j++)
        i++;
    return *i;
}

double evaluarEscondido()
{
    double nota = 0;

    int*ptra=new int(10);
    int*ptrb=new int(20);

    cout<<"obtenerApuntador():\t\t";
    if(obtenerApuntador(ptra)!=NULL
        && **obtenerApuntador(ptra)==10
        && **obtenerApuntador(ptrb)==20
        )
    {
        nota+=1.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"esMayuscula():\t\t\t";
    if(esMayuscula("HOLA")
        && !esMayuscula("hOLA")
       && esMayuscula("O")
       && !esMayuscula("o")
       && esMayuscula("Test")
       && !esMayuscula("test")
        )
    {
        nota+=1.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    int* arr1=new int[3];
    arr1[0]=10;
    arr1[1]=20;
    arr1[2]=30;
    int* arr2=new int[2];
    arr2[0]=6;
    arr2[1]=7;
    int* arr3=new int[4];
    arr3[0]=1;
    arr3[1]=2;
    arr3[2]=3;
    arr3[3]=4;

    escribir("archivo1",arr1,3);
    int* arr11 = leer("archivo1");

    escribir("archivo2",arr2,2);
    int* arr22 = leer("archivo2");

    escribir("archivo3",arr3,4);
    int* arr33 = leer("archivo3");

    cout<<"leer() y escribir():\t\t";
    if(compare(arr1,arr11,3)
        && compare(arr22,arr22,2)
        && compare(arr33,arr33,4)
        )
    {
        nota+=4;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<int>vp1;
    vp1.push_back(10);
    vp1.push_back(20);
    vp1.push_back(21);
    vp1.push_back(12);

    vector<int>vp2;
    vp2.push_back(3);
    vp2.push_back(1);
    vp2.push_back(9);

    vector<int>vp3;
    vp3.push_back(7);
    vp3.push_back(1);
    vp3.push_back(10);

    vector<int>vp4;
    vp4.push_back(2);
    vp4.push_back(100);
    vp4.push_back(10);
    vp4.push_back(20);
    vp4.push_back(6);

    cout<<"seleccionarPares():\t\t";
    if(seleccionarPares(vp1).size()==3
       && seleccionarPares(vp1)[0]==10
       && seleccionarPares(vp1)[1]==20
       && seleccionarPares(vp1)[2]==12
       && seleccionarPares(vp2).size()==0
       && seleccionarPares(vp3).size()==1
       && seleccionarPares(vp3)[0]==10
       && seleccionarPares(vp4).size()==5
       && seleccionarPares(vp4)[0]==2
       && seleccionarPares(vp4)[1]==100
       && seleccionarPares(vp4)[2]==10
       && seleccionarPares(vp4)[3]==20
       && seleccionarPares(vp4)[4]==6
        //&& !esSuccecionMonotona(vm2)
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    vector<int>vm1;
    vm1.push_back(10);
    vm1.push_back(20);
    vm1.push_back(30);

    vector<int>vm2;
    vm2.push_back(10);
    vm2.push_back(20);
    vm2.push_back(30);
    vm2.push_back(50);

    vector<int>vm3;
    vm3.push_back(4);
    vm3.push_back(6);
    vm3.push_back(8);
    vm3.push_back(10);

    vector<int>vm4;
    vm4.push_back(3);
    vm4.push_back(6);
    vm4.push_back(9);
    vm4.push_back(12);
    vm4.push_back(15);
    vm4.push_back(18);

    vector<int>vm5;
    vm5.push_back(2);
    vm5.push_back(5);
    vm5.push_back(9);
    vm5.push_back(15);

    cout<<"esSuccecionMonotona():\t\t";
    if(esSuccecionMonotona(vm1)
        && !esSuccecionMonotona(vm2)
        && esSuccecionMonotona(vm3)
        && esSuccecionMonotona(vm4)
        && !esSuccecionMonotona(vm5)
        )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    return nota;
}
