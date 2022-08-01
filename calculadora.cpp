#include <iostream>
#include <stdlib.h>
using namespace std;

class Calculadora{
private:
    int x;
public:
    Calculadora();
    Calculadora(int num);
    void print();
    Calculadora operator +(Calculadora c);
    Calculadora operator -(Calculadora c);
    Calculadora operator *(Calculadora c);
    Calculadora operator /(Calculadora c);
    Calculadora operator ++();
    Calculadora operator --();
};

Calculadora::Calculadora(){
    x = 0;
}
Calculadora::Calculadora(int num){
    x = num;
}
void Calculadora::print(){
    cout << x;
}
Calculadora Calculadora::operator+(Calculadora c){
    Calculadora aux;

    aux.x = x + c.x;
    return aux;
}
Calculadora Calculadora::operator-(Calculadora c){
    Calculadora aux;

    aux.x = x - c.x;
    return aux;
}
Calculadora Calculadora::operator*(Calculadora c){
    Calculadora aux;

    aux.x = x * c.x;
    return aux;
}
Calculadora Calculadora::operator/(Calculadora c){
    Calculadora aux;

    aux.x = x / c.x;
    return aux;
}
Calculadora Calculadora::operator++(){
    x++;
    return *this;
}
Calculadora Calculadora::operator--(){
    x--;
    return *this;
}
main(){
    int i, op, x1, x2;
    do{
        cout << "qual operacao deseja fazer?" << endl;
        cout << "[1] ADICAO." << endl;
        cout << "[2] SUBTRACAO." << endl;
        cout << "[3] MULTIPLICACAO." << endl;
        cout << "[4] DIVISAO." << endl;
        cout << "[5] INCREMENTAR." << endl;
        cout << "[6] DECREMENTAR." << endl;
        cout << "[0] SAIR." << endl;
        cin >> op;
        system("cls");
        if(op == 1){
            cout << "numero 1: ";
            cin >> x1;
            cout << "numero 2: ";
            cin >> x2;
            Calculadora A(x1), B(x2), C;
            C = A + B;
            cout << x1 << " + " << x2 << " = ";
            C.print();
            cout << endl << endl;
        }
        if(op == 2){
            cout << "numero 1: ";
            cin >> x1;
            cout << "numero 2: ";
            cin >> x2;
            Calculadora A(x1), B(x2), C;
            C = A - B;
            cout << x1 << " - " << x2 << " = ";
            C.print();
            cout << endl << endl;
        }
        if(op == 3){
            cout << "numero 1: ";
            cin >> x1;
            cout << "numero 2: ";
            cin >> x2;
            Calculadora A(x1), B(x2), C;
            C = A * B;
            cout << x1 << " X " << x2 << " = ";
            C.print();
            cout << endl << endl;
        }
        if(op == 4){
            cout << "numero 1: ";
            cin >> x1;
            cout << "numero 2: ";
            cin >> x2;
            Calculadora A(x1), B(x2), C;
            C = A / B;
            cout << x1 << " / " << x2 << " = ";
            C.print();
            cout << endl << endl;
        }
        if(op == 5){
            cout << "digite um numero para ser incrementado: ";
            cin >> x1;
            Calculadora A(x1), C;
            C = ++A;
            cout << x1 <<" + "<< "1" << " = ";
            C.print();
            cout << endl << endl;
        }
        if(op == 6){
            cout << "digite um numero para ser decrementado: ";
            cin >> x1;
            Calculadora A(x1), C;
            C = --A;
            cout << x1 <<" - "<< "1" << " = ";
            C.print();
            cout << endl << endl;
        }
    }while(op != 0);
}

