#include "encrypt.h"
Encrypt::Encrypt(){
}
std::string Encrypt::get_plain(){
	return m_plain;
}
std::string Encrypt::get_cipher(){
	return m_cipher;
}
bool Encrypt::read(bool isPlain, std::string filename){
	std::ifstream file(filename.c_str());
	if(file){
		std::string message;
		getline(file, message);
		file.close();
		if(isPlain==true){
			m_plain = message;
		}else{
			m_cipher = message;
		}
		return true;
	}else{
		std::cout<<"Ouverture du fichier impossible"<<std::endl;
		return false;
	}
}
bool Encrypt::write(bool isPlain, std::string filename){
	std::ofstream file(filename.c_str());
	if(file){
		if(isPlain == false){
			file<<m_plain;
		}else{
			file<<m_cipher;
		}
		file.close();
		return true;
	}else{
		std::cout<<"Ouverture du fichier impossible"<<std::endl;
		return false;
	}
}
std::string Encrypt::encode(){
	m_cipher = m_plain;
	return m_cipher;
}
std::string Encrypt::decode(){
	m_plain = m_cipher;
	return m_plain;
}
