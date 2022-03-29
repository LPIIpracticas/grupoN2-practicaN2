
#include <string>

using namespace std;
#include "odio.h"

void Odio::inicio()
{
    cin.ignore();
    cout << "A quien o a que odias: ";
    getline(cin, quienoQue);
    cout << "Ingrese numero de Razones: ";
    cin >> nroRazones;
    razon = new string[nroRazones];
    cin.ignore();
    for (int i = 0; i < nroRazones; i++)
    {
        cout << "Ingrese Razon N° " << i + 1 << ": ";
        getline(cin, razon[i]);
    }
    cout << "Ingrese el grado de odio: ";
    cin >> grado;
    cout << "Ingrese fecha de inicio: ";
    fechaInicio.ingresar();
}
void Odio::final()
{
    cout << "Ingrese fecha de finalización: ";
    fechaFin.ingresar();
    delete[] razon;
}
void Odio::agredir()
{
    cout << "ojala y te....." << endl;
}
void Odio::ignorar()
{
    cout << "quien es " << quienoQue << endl;
}
void Odio::despreciar()
{
    cout << quienoQue << "no vale nada.." << endl;
}
void Odio::detenerAgresion()
{
    cout << "lo dejo ahi, no eres importante..." << endl;
}