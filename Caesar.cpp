#include<iostream>
#include "Caesar.h"

using namespace std;


string Caesar::encode(){

	for (int i = 0; i < message[i]; ++i)
	{
		if (message[i]>='A'&& message[i]<='Z')
		{
			message[i]-= 'A';
			message[i]+= 3;
			message[i]%= 26;
			message[i]+= 'A';
		}
		else if (message[i]>='a'&& message[i]<='z' )
		{
			message[i]-= 'a';
			message[i]+= 3;
			message[i]%= 26;
			message[i]+= 'a'; 
		}
	}
	return 0;
}

string Caesar::decode(){
	for (int i = 0; i < message[i]; ++i)
	{
		if (message[i]>='A'&& message[i]<='Z')
		{
			message[i]-= 'A';
			message[i]-= 3;
			while(message[i]<0)
				message[i]+= 26;
			message[i]%= 26;
			message[i]+= 'A';
		}
		else if (message[i]>='a'&& message[i]<='z')
		{
			message[i]-= 'a';
			message[i]-= 3;
			while(message[i]<0)
				message[i]+= 26;
			message[i]%= 26;
			message[i]+= 'a';
		}
	}
	return 0;
}