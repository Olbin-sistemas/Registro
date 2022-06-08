#include <iostream>
#include "Seccion.h"

using namespace std;

//Seccion *objSeccion;
Seccion *objSeccion= new Seccion(3);
string *Listado, *ptr;

// --> Inicializar constructor.
/*  Seccion::Seccion(string _Nombre,string _Aula,string _Hora,string _ID,string _UV){
    Nombre=_Nombre;
    Aula=_Aula;
    Hora=_Hora;
    ID=_ID;
    UV=_UV;
}
*/

int main()
{
    //Creacion del Objeto-->(objSeccion) de la clase Seccion.
    //Seccion objSeccion1=Seccion("Programacion I","666","1800","00","5");

    objSeccion->setNombre("Programacion I");
    objSeccion->setAula("666");
    objSeccion->setHora("1800");
    objSeccion->setUV("5");

    //objSeccion->setCupos(3);

    objSeccion->Matricular("Pedro");
    objSeccion->Matricular("Pablo");
    objSeccion->Matricular("Vilma");

    objSeccion->setCupos(10);

    objSeccion->Matricular("Bety");

    cout << objSeccion->getNombre();
    Listado = objSeccion->Listado();

    ptr= Listado;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;
    ptr++;
    cout << endl << *ptr;

    cout << endl << "======Con ciclo for=======";
    ptr= Listado;
    for(int i= 0; i <= objSeccion->getUltimo(); i++){
        cout << endl << *ptr;
        ptr++;
    }
    return 0;
}
