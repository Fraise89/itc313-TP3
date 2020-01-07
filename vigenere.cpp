#include "vigenere.h"

Vigenere::Vigenere(){

}
void Vigenere::create_key(int length, int *tab){
	key = new int[length];
	int i;
	for(i=0;i<length;i++){
		key[i] = tab[i];
	}
}
