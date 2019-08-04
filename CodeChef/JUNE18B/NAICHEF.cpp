#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>


using namespace std;

float prob(int m, int n, int data[]);

int main(){


	int t;
	cin >> t;
	cin.get();

	while(t > 0){

		//Read()
		int n, a, b;
		cin >> n >> a >> b;
		int faces [n];
		for(int i = 0; i < n; i++){cin >> faces[i];}


		//Code()
        	cout << prob(a,n,faces) * prob(b,n,faces) << endl;

		t--;

	}

return 0;

}

float prob(int m, int n, int data[]){

    	int counter = 0;
	for(int i = 0; i < n; i++){
		if(data[i] == m){
        		counter = counter + 1;
		}
	}

	return (float)counter / (float)n;

}
