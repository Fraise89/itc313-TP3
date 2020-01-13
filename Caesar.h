#ifndef CAESAR_H
#define CAESAR_H

#include<iostream>
#include<string>
#include "encrypt.h"

using namespace std;

class Caesar: public Encrypt {

public:
	Caesar(int valeur=3): m_valeur(valeur){}
	string encode();
	string decode();

private:
	int m_valeur;

	
};
#endif