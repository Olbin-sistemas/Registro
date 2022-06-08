#ifndef SECCION_H_INCLUDED
#define SECCION_H_INCLUDED

#include <iostream>

using namespace std;

class Seccion{
private:
    string Nombre;
    string Aula;
    string Hora;
    string ID;
    string UV;
    int Cupos;
    int Ultimo;
    string *Alumnos;

public:
    //-->Constructor.
    //Seccion(string,string,string,string,string);

    Seccion(int );

    void setNombre(string Nombre);
    string getNombre();

    int getUltimo();

    void setAula(string Aula);
    string getAula();

    void setHora(string Hora);
    string getHora();

    void setID(string ID);
    string getID();

    void setUV(string UV);
    string getUV();

    void setCupos(int Cupos);
    int getCupos();

    bool Matricular(string Alumno);
    void Cancelar(string Alumno);

    string *Listado();
};

#endif // SECCION_H_INCLUDED
