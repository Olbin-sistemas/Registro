#include "Seccion.h"

Seccion::Seccion(int n){
    this->Cupos= n;
    this->Alumnos= new string[Cupos];
    this->Ultimo= -1;
}

string *Seccion::Listado(){
    return Alumnos;
}

bool Seccion::Matricular(string Alumno){
    if(Ultimo < (Cupos-1)){
        this->Alumnos[++Ultimo]= Alumno;
        return true;
    }
    else{
        return false;
    }
}

int Seccion::getUltimo(){
    return this->Ultimo;
}

void Seccion::setUV(string UV){
    this->UV= UV;
}

string Seccion::getUV(){
    return this->UV;
}

void Seccion::setCupos(int Cupos){
    if (this->Alumnos == NULL){
        this->Cupos= Cupos;
        this->Alumnos= new string[Cupos];
        this->Ultimo= -1;
    }
    else{
        string *ptrTemp;
        ptrTemp= Alumnos;
        this->Cupos= Cupos;
        Alumnos= new string[Cupos];
        int i= Ultimo;
        Ultimo= -1;
        for(i; i >= 0; i--){
            this->Matricular(*ptrTemp);
            ptrTemp++;
        }
        delete(ptrTemp);
    }
}

int Seccion::getCupos(){
    return this->Cupos;
}

void Seccion::setNombre(string Nombre){
    this->Nombre= Nombre;
}

string Seccion::getNombre(){
    return this->Nombre;
}

void Seccion::setAula(string Aula)
{
    this->Aula= Aula;
}

string Seccion::getAula()
{
    return this->Aula;
}

void Seccion::setHora(string Hora)
{
    this->Hora= Hora;
}

string Seccion::getHora()
{
    return this->Hora;
}

void Seccion::setID(string ID)
{
    this->ID= ID;
}

string Seccion::getID()
{
    return this->ID;
}
