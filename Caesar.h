#ifndef CAESAR_H
#define CAESAR_H

#include<iostream>
#include<string>
#include "encrypt.h"

using namespace std;

class Caesar: public Encrypt {

public:
	Caesar(int valeur=n): m_valeur(valeur);
	int
	string encode();
	string decode();

private:
	int m_valeur;

	
};