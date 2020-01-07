#ifndef VIGENERE_H
#define VIGENERE_H

class Vigenere : public encrypt{
	public :
		Vigenere();
		void create_key(int length, int *tab);
	private :
		int *key=nullptr;

}

#endif
