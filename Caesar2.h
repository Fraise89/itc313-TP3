#ifndef CAESAR2_H
#define CAESAR2_H

#include <iostream>
#include <string>
#include "encrypt.h"

using namespace std;

/*cout<<"Entrez la valeur du décalage"<<endl;
int n;
cin>n;*/

class Caesar2: public Encrypt {

public:
	Caesar2(int valeur2=n): m_valeur2(valeur2){}
	string encode();
	string decode();

private:
	int m_valeur2;
};
#endif