#pragma once
#include <iostream>
#include <chrono>
#include "data.hpp"

using namespace std;

class Pessoa {
    private:
        string nome;
        const string cpf;
        Data dataNascimento;
    public:
        Pessoa(string cpf);
        string getNome();
        void setNome(string nome);

        void setDataNascimento(Data dataNascimento);
        Data getDataNascimento();
        string getCPF();
};
