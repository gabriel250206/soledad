#include <iostream>
#include <vector>
using namespace std;

void crear(vector<vector<int>>& tablero) {
	vector<int> x = {4,0,0,0,0,0,0,0,0,0,0,4};
	for (int i = 0; i < 22; i++) {
		tablero.push_back(x);
	}
	for (int i = 0; i < 12; i++) {
		tablero[0][i] = 4;
		tablero[21][i] = 4;
	}
}





void mostrar(vector<vector<int>>& tablero) {
	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 12; j++) {
			if (tablero[i][j] == 0) {
				cout << "[ ]";
			}
			if (tablero[i][j] == 4) {
				cout << "[8]";
			}
		}
		cout << endl;
	}
}

void spawn(vector<vector<int>>& tablero, vector<vector<int>>espacio, int x){
    
    if(x==3){
        for (int i=1;i < x; i++){
            for (int j=4;j<7;j++){
                tablero[i][j]=espacio[i-1][j-7];
            }
        }
    }
    
}