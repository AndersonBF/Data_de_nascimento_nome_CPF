#include <iostream>
#include <ctime>
#include "data.hpp"
#include "pessoa.hpp"

using namespace std;
int main(){
    //Data datum;
    int num = 0;
     int dia, mes, ano;
     string cpf,nome;
    cout << "Data de nascimento" << endl;
    cin >> dia;
    cin >> mes;
    cin >> ano;
    Data dataNascimento(dia,mes,ano);
    cout << "CPF" <<  endl;
    cin >> cpf;
    Pessoa person(cpf);
   // dataNascimento.formatoCompacto();
   cout << "Nome" << endl;
    cin >> nome;
            person.setNome(nome);
    cout << "\n"<< person.getNome();
    cout << "\n"<<person.getCPF();
    //cout << "\n" << dataNascimento

    //cin >> "" >> endl;
    cout << "\n"<< dataNascimento.formatoExtenso() << endl;

     return 0;
}
