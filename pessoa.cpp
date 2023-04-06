#include "pessoa.hpp"

using namespace std;

Pessoa::Pessoa(string CPF) : cpf(CPF){
    string nome = " ";
    Data dataNascimento;

}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}
string Pessoa::getNome() {
    return this->nome;
}
void Pessoa:: setDataNascimento(Data dataNascimento) {
    this-> dataNascimento = dataNascimento;

    }

Data Pessoa::getDataNascimento() {
     return this->dataNascimento;
}
string Pessoa::getCPF() {
        return this-> cpf;
}
