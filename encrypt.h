#ifndef ENCRYPT_H
#define ENCRYPT_H

#include<iostream>
#include<string>
#include<fstream>

class Encrypt{
	public:
		Encrypt();
		std::string get_plain();
		std::string get_cipher();
		bool read(bool isPlain, std::string filename);
		bool write(bool isPlain, std::string filename);
		std::string encode();
		std::string decode();
	protected:
		std::string m_plain;
		std::string m_cipher;
};

#endif
