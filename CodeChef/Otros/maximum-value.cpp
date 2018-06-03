#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
  
  
  
  int t;
  cin >> t;
  cin.get();
  int k = 0;
  
while(k < t){

	vector<int> vec;
  	string line;
	int mayor = -1;
  	
  	getline(cin, line);
  	stringstream ss(line);
    int num;
    while(ss>>num){
        vec.push_back(num);
    }
  	for(int i = 0; i < vec.size();i++){
  		if(vec[i] == vec.size()-1){
  			vec.erase(vec.begin() + i);
  			break;
		}
	}
	for(int j = 0; j < vec.size();j++){
  		if(vec[j] > mayor){
  			mayor = vec[j];
		}
	}
	
  	cout << mayor << endl;
  	
  	k++;
}



return 0;

}
