// Stefan Webb Gutierrez - 402130856

#include "interfaz.h"

#include<iostream>
#include <sstream>
#include<vector>
#include<string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;




int main(){


	interfaz z;



	
	string op = " ";

	while(op != "."){

    cout << endl;

	

	cout << "digite operacion , para salir digite la letra s " << endl;

	cout << endl;

	getline(cin , op);

	if(op == "s")
		exit(0);


	bool q = z.noes(op);

	try {

		if(q) {
		
			z.inter(op);
			
		
		}  else {
	
	throw " digitos incorrectos  ";
	
	} 
		
	}
		catch(const char s[]){

			cout << endl;

		cout << s <<endl;

		cout << endl;


        z.validae(op);
		
	}


		
	
	
	
	
	}

	

	

		
	
	
	
	
	return 0;
}
