#include<iostream>
#include "Caesar2.h"

using namespace std;

cout<<"Entrez la valeur du décalage"<<endl;
int n;
cin>n;

string Caesar2::encode(){
	for (int i = 0; i < message.size(); ++i)
	{
		if (message[i]>='a'&& message[i]<='z')
		{
			message[i]-= 'a';
			message[i]+= n;
			message[i]%= 128;
		}
	}
	return 0;
}

string Caesar2::decode(){
	for (int i = 0; i < message.size(); ++i)
	{
		if (message[i]>='a'&& message[i]<='z')
		{
			message[i]-= 'a';
			message[i]-= n;
			while(message[i]<0)
				message[i]+= 128;
			message[i]%= 128;
		}
	}
	return 0;
}