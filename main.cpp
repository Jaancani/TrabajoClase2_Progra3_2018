#include <iostream>
#include <random>

using namespace std;

void  buscaSecuencial(int arr[],int n) {
    for (int c = 0; c < 100; c++) {
        if (n == arr[c])
            cout << "Valor " << n << " Posicion " << c << endl;
    }
    if(n>100)
        cout<<"Numero no existente"<<endl;
}
void buscaBinaria(int arr[], int n){
    int inicio=0,final=99;
    int pivot=(inicio+final)/2;

    if(n>=pivot){
        for(final;final>=pivot;final--){
            if(arr[final]==n)
                cout << "Valor " << n << " Posicion " << final << endl;
        }
    }else if(n<=pivot){
        for(inicio;inicio>=pivot;inicio++){
            if(arr[final]==n)
                cout << "Valor " << n << " Posicion " << inicio << endl;
        }
    }else {
        cout << "Numero Inexistente"<<endl;
    }
}
int main() {
    int n=0,op;

    int arr[100];
    for(int c=0; c<100;c++){
        arr[c]=c+1;
    }
    while(n!=-1){
        cout <<endl<< "Ingrese numero a buscar (Ingrese -1 para salir): ";
        cin >> n;
        if(n==-1)
            break;
        cout << "1.Busqueda Secuencial" << endl << "2.Busqueda Binaria" << endl << "Ingrese Opccion: ";
        cin >> op;

        if (op == 1)
            buscaSecuencial(arr, n);
        else if (op == 2)
            buscaBinaria(arr, n);
    }


    return 0;
}