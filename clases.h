#pragma else

class Fecha
{
    private:
        int _dia, _mes, _anio;

        void establecerFechaPorDefecto();
        bool esBisiesto();

    public:
        Fecha();
        Fecha(int dia, int mes, int anio);

        int getDia();
        int getMes();
        int getAnio();
};

void Fecha::establecerFechaPorDefecto()
{
    _dia = 1;
    _mes = 1;
    _anio = 1900;
}

bool Fecha::esBisiesto()
{
    if ((_anio % 4 == 0 && _anio % 100 != 0) || _anio % 400 == 0) {
        return true;
    }
    return false;
}

Fecha::Fecha()
{
    establecerFechaPorDefecto();
}

Fecha::Fecha(int dia, int mes, int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;

    if (_dia <= 0 || _mes <= 0 || _anio <= 0 || _mes > 12)
    {
        establecerFechaPorDefecto();
    }
    else
    {
        int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (esBisiesto()) {
            dias[1]++;
        }

        if (_dia > dias[_mes - 1]) {
            establecerFechaPorDefecto();
        }
    }
}

int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}
