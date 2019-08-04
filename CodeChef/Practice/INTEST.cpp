#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

	int k;
	int n;
	cin >> n >> k;
	int contador = 0;
	int i = 0;
	while(i<n){
		
		int x;
		cin >> x;
		if(x % k == 0){
			contador++;
		}
		
		i++;
	}
	cout << contador;

return 0;

}
