#pragma once

#include <climits>

int getInteger(int minimo = INT_MIN, int maximo = INT_MAX){
	int input;
	
	while(true){
		cin >> input;
		if (cin.fail() || input < minimo || input > maximo){
			cin.clear();
			cin.ignore();
		}
		else{
			cin.ignore();
			return input;
		}
	}
}

	/// int valor = getInteger(1, 3);             ejemplo uso
