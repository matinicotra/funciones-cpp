int contarRegistros()
{
	FILE *p = fopen(nombre, "rb");
	if (p == NULL) return -1;
	fseek(p, 0, SEEK_END);
	int tam = ftell(p);
	fclose(p);
	return tam / sizeof(Objeto);
}
