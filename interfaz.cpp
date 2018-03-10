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




interfaz::interfaz(){
	
	op = " ";
	
}
interfaz::~interfaz(){}


void interfaz::inter(string op){
	
	double res = 0;
	double res1 = 0;
	double res2= 0;
	double res3 = 0;
	double res4 = 0;
	double con = 0;
	double c = 0;
	
	char o = ' ';
	
	int pos = 0;
	
	
	
	vector<double>num;
	vector<double>num1;
	
	vector<char>oper;
	vector<int>opp;
	

	
	int tam = op.size();
	int cont = 0 ;
	
	
	for(int i = 0 ; i < tam ; ++i){
		
		if(op.at(i) == '+' || op.at(i) == '-' || op.at(i) == '*' || op.at(i) == '/'){
			
			
			o = op.at(i);
			if(o == '*'){
				o = 'a';}
			if(o == '/'){
				o = 'b';}
			if(o == '+'){
				o = 'c';}
			if(o == '-'){
				o = 'd';}
			
			oper.push_back(o);
			opp.push_back(i);
			
			cont = 0;
			
		}
		
	}
	
	
	
	
	
	
	
	string del = "+,-,*,/";
	size_t cu;
	size_t n = -1;
	do
		{
			cu = n + 1;
			n = op.find_first_of( del, cu );
			res = std::stod(op.substr( cu, n - cu ));
			num.push_back(res);
		}
	while (n != string::npos);
	
	
	
	
	
	
	
	int tamp = oper.size();
	
	
	
	cout << endl;
	
	double aux1 = 0;
	double aux2 = 0;
	
	
	
	for(int j = 0 ; j < tamp ; ++j){
		
		if (oper[j] == 'd'){
			num[j+1] = -num[j+1];
			
		}
		
	}


	for(int j = 0 ; j < tamp ; ++j){
		
		if (oper[j] == 'b'){

	

			if(num[j] != 0.0 && num[j+1] != 0.0){

				
				num[j+1] = num[j]*(1/num[j+1]);
				num[j] = 0.0;
				res = num[j+1];
			
			}
			
			
		}
		
	}

		
	for(int j = 0 ; j < tamp ; ++j){
		
		if (oper[j] == 'a'){


			if(num[j] != 0.0 && num[j+1] != 0.0){
				
		

				num[j+1] = num[j] * num[j+1];
				num[j] = 0.0;
				res = num[j+1];
				
			}


			if(num[j] != 0.0 && num[j+1] == 0.0 && num[j+2] != 0.0){
				
	
				num[j+2] = num[j] * num[j+2];
				num[j] = 0.0;
				res = num[j+2];
			}
			
		}
		
	}



	
	
	for(int j = 0 ; j < tamp ; ++j){
		
		if (oper[j] == 'a'){

			if(num[j+1] != 0.0){
				aux2 = num[j+1];
				num[j+1] = 0.0;
				num1.push_back(aux2);
			}


			
			if(num[j] != 0.0){
				aux1 = num[j];
				num[j] = 0.0;
				num1.push_back(aux1); 
			}
			
		
			
		}
		
	}
	


	
	for(int j = 0 ; j < tamp ; ++j){
		
		if (oper[j] == 'b'){

			if(num[j+1] != 0.0){
				aux2 = num[j+1];
				num[j+1] = 0.0;
				num1.push_back(aux2);
			}


			
			if(num[j] != 0.0){
				aux1 = num[j];
				num[j] = 0.0;
				num1.push_back(aux1); 
			}
			
		}
		
	}
	

	
	
	
	for(int j = 0 ; j < tamp  ; ++j){
		
		if (oper[j] == 'd'){
			
			if(num[j] != 0.0){
				aux1 = num[j];
				num[j] = 0.0;
				num1.push_back(aux1); 
			}
			
			
			
			if(num[j+1] != 0.0){
				aux2 =  num[j+1];
				num[j+1] = 0.0;
				num1.push_back(aux2);
			}
			
		}
		
	}
	


	for(int j = 0 ; j < tamp  ; ++j){
		
		if (oper[j] == 'c'){
			
			
			
			if(num[j] != 0.0){
				aux1 = num[j];
				num[j] = 0.0;
				num1.push_back(aux1); 
			}
			
			
			if(num[j+1] != 0.0){
				aux2 = num[j+1];
				num[j+1] = 0.0;
				num1.push_back(aux2);
			}
			
			
		}
		
	}
	
	sort(oper.begin(),oper.end());


	for(int j = 0 ; j < num1.size()-1 ; ++j){
		
			
			res1 = num1[j] + num1[j+1];
			num1[j] = res1 ;
			num1[j+1] = res1;
			
			res = res1;
			
	}
	
	
	cout << "resultado: " << double (res) << endl;

	
}

void interfaz::validae(string op){

	int tamp = op.size();

	char *va;

	va = new char[tamp];



	for(int j = 0 ; j < tamp ; ++j){
		for(int i = j ; i < tamp ; i++ ){
		

				if(!isdigit(op[j]) && op[j] != '-' && op[j] != '+' && op[j] != '/' && op[j] != '*' && op[j] != '.' && op[j] != ' '){
					
					va[j] = '^' ;

			
				    
				}

				else

					va[j] = ' ';

	}

	}
    
	for(int j = 0 ; j < tamp ; ++j){

	cout << op[j];
	
	}

	cout << endl;

	for(int j = 0 ; j < tamp ; ++j){

	cout << va[j];
	
	}




}

bool interfaz::noes(std::string op){

	int tam;
	
	tam = op.size();

	for(int j = 0 ; j < tam ; ++j)
		for(int i = j ; i < tam ; i++ )
		

				if(!(isdigit(op[j])) && (op[j] != '-') && (op[j] != '+') && (op[j] != '/') && (op[j] != '*') && (op[j] != '.') && (op[j] != ' '))
					
					return false;

					return true;

			

	



}