#ifndef VIGENERE_H
#define VIGENERE_H

class Vigenere : public encrypt{
	public :
		Vigenere(int lengthKey, int *key);
		void encode();
		void decode();
	private :
		int *m_key=nullptr;

}

#endif
