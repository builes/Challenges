#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){

	
	int t;
	cin >> t;
	cin.get();
	
	while(t > 0){
	
		//Trabajadores y empleados
		int n;
		int m;
		cin >> n >> m;
		
		int companiesTimes[m];
		
		//Salario esperado
		long salarioEsperado[n];
		for(long i = 0; i < n; i++){cin >> salarioEsperado[i];}
		
		//Salario ofrecido y máximo de ofertas
		long salarioOfrecido[m];
		long maximoOfertas[m];
		for(long u = 0; u < m; u++){
			cin >> salarioOfrecido[u] >> maximoOfertas[u];
			companiesTimes[u] = maximoOfertas[u];
		}
		
		//Matriz de cualificación
		string quales[n];
		getline(cin, quales[0]);
		int k = 0;
		while (k<n && getline(cin, quales[k])) {
			k++;
		}
		bool qual[n][m];
		for(int j = 0; j < n; j++){
			for(int y = 0; y < m; y++){
				qual[j][y] = (quales[j].at(y) == '1' ? 1 : 0);
			}
		}
		
		//Code()
		
		//Candidatos que van a tomar el trabajo
		int candidates = 0;
		//Salario total de los que van a tomar el trabajo
		long totalSalaries = 0;
		//Total de compañias que no conseguirán ningún trabajador
		int companies = 0;
		
		for(int a = 0; a< n; a++){
			
			long max = -1;
			int indexmax = -1;
			
			for(int b = 0; b < m; b++){
				if(qual[a][b] == 1){
					if(companiesTimes[b] > 0 && salarioOfrecido[b] >= salarioEsperado[a] && salarioOfrecido[b] > max){
						max = salarioOfrecido[b];
						indexmax = b;
					}
				}
				
			}
			
			if(indexmax > -1 && companiesTimes[indexmax] > 0){
				companiesTimes[indexmax] -= 1;
				totalSalaries += salarioOfrecido[indexmax];
				candidates += 1;
			}
				
			
		}
		
		for(int c = 0; c < m; c++){
			if(maximoOfertas[c] == companiesTimes[c]){
				companies += 1;
			}
		}
		
		
		cout << candidates << " " << totalSalaries << " " << companies << endl;
		
		t--;
	
	}

return 0;

}

