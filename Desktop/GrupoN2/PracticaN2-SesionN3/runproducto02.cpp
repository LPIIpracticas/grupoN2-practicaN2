
#include "producto.h"
#include "producto.cpp"
int menu();

int main()
{
    char resp = ' ';
    int n = 0;
    float p = 0;
    Producto azucar;
    do
    {
        system("clear");
        int opc = menu();
        switch (opc)
        {
        case 1:
            azucar.ingresar();
            break;
        case 2:
            cout << "Ingrese cantidad a aumentar en el stock: ";
            cin >> n;
            azucar.aumentarStock(n);
            break;
        case 3:
            cout << "Ingrese cantidad a disminuir en el stock: ";
            cin >> n;
            azucar.disminuirStock(n);
            break;
        case 4:
            cout << "IGV: " << azucar.calcularIGV() << endl;
            break;
        case 5:
            cout << "Ingrese cantidad a disminuir en el stock: ";
            cin >> p;
            azucar.cambiarPrecio(p);
            break;
        case 6:
            azucar.imprimir();
        }
        do
        {
            system("clear");
            cout << "Desea continuar?(s/n): ";
            cin >> resp;
            resp = tolower(resp);
            if (resp != 's' && resp != 'n')
                cout << "ERROR: Ingrese solo 's' o 'n'..." << endl;
            system("pause");
        } while (resp != 's' && resp != 'n');
    } while (resp == 's');

    return 0;
}
int menu()
{
    int opc = 0;
    do
    {

        system("clear");
        cout << "\t\t\tMENU\n";
        cout << "\t\t\t====\n";
        cout << "1. INGRESAR DATOS DE PRODUCTO" << endl;
        cout << "2. AUMENTAR STOCK DE PRODUCTO" << endl;
        cout << "3. DISMINUIR STOCK DE PRODUCTO" << endl;
        cout << "4. CALCULAR IGV DE PRODUCTO" << endl;
        cout << "5. CAMBIAR PRECIO DE PRODUCTO" << endl;
        cout << "6. IMPRIMIR DATOS DE PRODUCTO" << endl;
        cout << "7. SALIR" << endl;
        cout << "Ingrese una opcion:(1-7): ";
        cin >> opc;
        if (opc < 1 || opc > 7)
        {
            system("clear");
            cout << "ERROR: eligio opcion no valida ingresar un valor entre(1-7)..." << endl;
            system("pause");
        }
    } while (opc < 1 || opc > 7);
    return opc;
}