#include "encrypt.h"

int main(){
	Encrypt test0;
	std::string message;
	//message chiffré
	if(test0.read(false,"message_chiffre.txt")){
		message = test0.decode();
		std::cout<<"message dechiffré: "<<message<<std::endl;
		test0.write(true, "message_non_chiffre.txt");
	}
	//message non chiffré
	if(test0.read(true, "message_non_chiffre.txt")){
		message = test0.encode();
		std::cout<<"message chiffré: "<<message<<std::endl;
		test0.write(false, "message_chiffre.txt");
	}
	return 0;
}
