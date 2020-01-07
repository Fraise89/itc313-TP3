#include "vigenere.h"

Vigenere::Vigenere(int lengthKey, int *key){
	key = new int[lengthKey];
	int i;
	for(i=0;i<lengthKey;i++){
		m_key[i] = key[i];
	}
}
void Vigenere::encode(){
	char tabAlphabet[26]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
	char message[m_plain.size()+1];
	strcpy(message, m_plain.c_str());
	int i,j;
	for(i=0;i<26;i++){
		for(j=0;j<26;j++){
			if(message[i]==tabAlphabet[j]){
				message[i] = tabAlphabet[j+key[i%]
				break;
			}
		}
	}
}
