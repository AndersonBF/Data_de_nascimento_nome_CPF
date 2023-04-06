#pragma once
#include <iostream>
using namespace std;

class Data {
    private:
        int dia;
        int mes;
        int ano;
    public:
        //
        Data();
        int getDia();
        Data(int dia, int mes, int ano);
        void setDia(int dia);
        void setMes(int mes);
        int getData();
        int getMes();
        int getAno();
        void setAno(int ano);
      //  int getAno();
        string formatoCompacto();
        string formatoExtenso();
};
