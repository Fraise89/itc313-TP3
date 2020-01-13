#ifndef VIGENERE_H
#define VIGENERE_H

#include "encrypt.h"
class Vigenere : public Encrypt{
	public :
		Vigenere(int lengthKey, char *key);
		void encode();
		void decode();
	private :
		int *m_key=nullptr;
		int m_lengthKey;
};

#endif
