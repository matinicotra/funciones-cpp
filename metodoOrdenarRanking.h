void ordenar(Clase *vec, int cant) {
	int mayor = 0;
	Objeto aux; // lo necesitamos unicamente en este metodo
	
	for (int i = 0; i < cant - 1; i++) {
		mayor = i;
		
		for (int j = i + 1; j < cant; j++) {
			
			if (vec[j].getValor() > vec[mayor].getValor()) {  // cambiar getters
				mayor = j;
			}
		}
		
		if (i != mayor) {
			aux = vec[i]; 
			vec[i] = vec[mayor];
			vec[mayor] = aux;
		}		
	}
