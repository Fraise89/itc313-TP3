#include "vigenere.h"
#include "encrypt.h"

int main(){
	char key[] ="ukop";
	Vigenere test(4, key);
	test.read(false, "message_chiffre.txt");
	test.decode();
	test.write(true, "message_non_chiffre.txt");
}
