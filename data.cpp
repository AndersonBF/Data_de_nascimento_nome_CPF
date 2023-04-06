#include "data.hpp"
#include <iostream>
#include <ctime>
#include <vector>


    Data::Data(){
    std::time_t t = std::time(nullptr);
	std::tm* now = std::localtime(&t);
    this->dia = now->tm_mday;
    this->mes = now->tm_mon+1;
    this->ano = now->tm_year+1900;
     //tag/monat/jahr
    }
    Data::Data(int dia, int mes, int ano) {

    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    }
    void Data::setDia(int dia) {
        this->dia = dia;
    }
    int Data::getDia() {
        return this->dia;
    }
     void Data::setMes(int mes) {
        this->mes = mes;
    }
    int Data::getMes() {
        return this->mes;
    }
     void Data::setAno(int ano) {
        this->ano = ano;
    }
    int Data::getAno() {
        return this->ano;
    }
    string Data::formatoCompacto() {
    return to_string(getDia()) + " / " + to_string(getMes()) + "/ " + to_string(getAno());
     }
    string Data::formatoExtenso() {
      vector<string>
     meses{"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
     return to_string(getDia()) + " de " + meses[getMes()-1] + " de " + to_string(getAno());
     }




