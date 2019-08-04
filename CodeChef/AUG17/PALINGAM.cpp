#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>


using namespace std;
bool elementosRepetidosEnA(string a, string b);
bool elementosIgualesEnB(string a, string b);

int main(){

	
	int r;
	cin >> r;
	cin.get();
	
	while(r > 0){
		
		string s;
		string t;
		string w;
		getline(cin,s);
		getline(cin,t);
		
		
		
		if(elementosRepetidosEnA(s,t) || elementosIgualesEnB(s,t)){
			cout << "A" << endl;
		}
		else{
			cout << "B" << endl;
		}
	
		
		
		r--;
	
	}

return 0;

}

bool elementosRepetidosEnA(string a, string b){
 
 	//A tiene dos letras que B no
	
	for(int i = 0; i < a.length(); i++){
		for(int j = 0; j < a.length(); j++){
			if(i != j && a.at(i) == a.at(j) && b.find(a.at(i)) == std::string::npos){
				return true;
			}
		}
	}
	
	return false;
		
} 

bool elementosIgualesEnB(string a, string b){
	
	//A tiene una letra que B no, pero tiene todas las de sus repertorio
	
	//¿Todas las letras de B están en A?
	bool flag = true;
	for(int i = 0; i < b.length(); i++){
		if(a.find(b.at(i)) == std::string::npos){
			flag = false;
		}
	}
	
	//¿A tiene una letra que B no?
	bool sswitch = false;
	for(int j = 0; j < a.length(); j++){
		if(b.find(a.at(j)) == std::string::npos){
			sswitch = true;
		}
	}
	
	return(flag && sswitch);
	
}
