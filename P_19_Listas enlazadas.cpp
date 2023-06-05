// P_19_Listas enlazadas.cpp
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <Windows.h>

class nodo
{
public:
    std::string nombre;
    int vida;
    int ataque;
    int edad;
    nodo* next;
};
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    nodo* Cabeza = NULL;
    nodo* Cuello = NULL;
    nodo* Pecho = NULL;
    nodo* Abdomen = NULL;
    nodo* Brazos = NULL;
    nodo* Piernas = NULL;
    nodo* Pies = NULL;
    nodo* nombre = NULL;
    nodo* vida = NULL;
    nodo* ataque = NULL;

    Cabeza = new nodo();
    Cuello = new nodo();
    Pecho = new nodo();
    Abdomen = new nodo();
    Brazos = new nodo();
    Piernas = new nodo();
    Pies = new nodo();
    nombre = new nodo();
    vida = new nodo();
    ataque = new nodo();

    Cabeza->nombre = "Milko";
    Cabeza->edad = 1500;
    Cabeza->vida = 15000;
    Cabeza->ataque = 150;
    Cabeza->next = Cuello;

    Cuello->nombre = "RORO<3";
    Cuello->edad = 12;
    Cuello->vida = 100;
    Cuello->ataque = 10;
    Cuello->next = Pecho;

    Pecho->nombre = "Danoloco";
    Pecho->edad = 10;
    Pecho->vida = 300;
    Pecho->ataque = 5;
    Pecho->next = Abdomen;

    Abdomen->nombre = "Pepo";
    Abdomen->edad = 11;
    Abdomen->vida = 450;
    Abdomen->ataque = 88;
    Abdomen->next = Brazos;

    Brazos->nombre = "Nokias";
    Brazos->edad = 16;
    Brazos->vida = 300;
    Brazos->ataque = 66;
    Brazos->next = Piernas;

    Piernas->nombre = "Sanji";
    Piernas->edad = 20;
    Piernas->vida = 500;
    Piernas->ataque = 100;
    Piernas->next = Pies;

    Pies->nombre = "Camestodevil";
    Pies->edad = 13000;
    Pies->vida = 800;
    Pies->ataque = 15200;
    Pies->next = NULL;

    

    // Impimir la lista enlazada
    while (Cabeza != NULL)
    {
        std::cout << Cabeza->nombre << " " << std::endl;
        std::cout << Cabeza->vida << " " << std::endl;
        std::cout << Cabeza->edad << " " << std::endl;
        std::cout << Cabeza->ataque << " " << std::endl << std::endl;
        Cabeza = Cabeza->next;
    }
    
   

}
