#include "vigenere.h"
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
//si on vaut seulement faire une clef avec des entier, on remplace seulement char par int
//et on retire le -96 
Vigenere::Vigenere(int lengthKey, char *key) : Encrypt() {
	m_key = new int[lengthKey];
	m_lengthKey = lengthKey;
	int i;
	for(i=0;i<lengthKey;i++){
		m_key[i] = key[i]-96;//on soustrait 96 pour avoir la valeur a=1 car a en ascii correspond à 97
	}
}
void Vigenere::encode(){
	char tabAlphabet[]="abcdefghijklmnopqrstuvwxyz";
	char message[m_plain.length()+1];
	strcpy(message,m_plain.c_str());
	int i,j,k;
	//on regarde lorsque le caractère du message est égale au caractère de l'alphabet
	for(i=0;i<m_plain.length();i++){
		for(j=0;j<26;j++){
			if(tabAlphabet[j]==message[i]){
				//puis on translate les lettres
				if(j+m_key[i%m_lengthKey]<26){
					message[i] = tabAlphabet[j+m_key[i%m_lengthKey]];
				}else{
					k=j+m_key[i%m_lengthKey]-26;
					message[i] = tabAlphabet[k];
				}
				j=26;
			}
		}
	}
	m_cipher = string(message);
}
void Vigenere::decode(){
	char tabAlphabet[]="abcdefghijklmnopqrstuvwxyz";
	char message[m_cipher.length()+1];
	strcpy(message, m_cipher.c_str());
	int i,j,k;
	for(i=0;i<m_cipher.length();i++){
		for(j=0;j<26;j++){
			if(tabAlphabet[j] == message[i]){
				if(j-m_key[i%m_lengthKey]>=0){
					message[i]=tabAlphabet[j-m_key[i%m_lengthKey]];
				}else{
					k=26+(j-m_key[i%m_lengthKey]);
					message[i] = tabAlphabet[k];
				}
				j=26;
			}
		}
	}
	m_plain = string(message);
}
