#include <iostream>
#include <vector>
#include <string>
#include "tablero.h"
using namespace std;

vector<vector<int>> tablero;

class Figura {
private:
	int tamanio;
	
	
public:
	int giro;
	vector<vector<int>>espacio;

	Figura(int t, string x) {
		tamanio = t;
		giro = 0;
	}

	

	void setEspacio() {
		vector<int>x;
		for (int i = 0; i < tamanio; i++) {
			for (int j = 0; j < tamanio; j++) {
				x.push_back(1);
			}
			espacio.push_back(x);
		}
	}

	void setHitbox(string x) {
		if (x == "l" || x == "L") {
			espacio[0][0] = 2;
			espacio[1][0] = 2;
			espacio[1][1] = 2;
			espacio[1][2] = 2;

		}
	}

    int getTamanio(){
        return tamanio;
    }

};



int main() {

	crear(tablero);
	mostrar(tablero);
	Figura tres{3,"l"};
	spawn(tablero,tres.espacio,tres.getTamanio);


	return 0;
}