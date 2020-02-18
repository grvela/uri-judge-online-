#include <iostream>
#include <string>

using namespace std;

int Dias(int X, int Y) {
	if(X > Y) return X - Y;
	else return 0;
}

int Horas(int X, int Y) {
	if(X > Y) return X - Y;
	else {
		if(X == Y) return 0;
		else {
			return X + (24 - Y);
		}
	}
}

int Minutos(int X, int Y) {
	if(X > Y) return X - Y;
	else {
		if(X == Y) return 0;
		else return X + (60 - Y);
	}
}

int Segundos(int X , int Y) {
	if(X > Y) return X - Y;
	else {
		if(X == Y) return 0;
		else return X + (60 - Y);
	}
}

int main() {
	int Dia_inicial, Hora_inicial, Minuto_inicial, Segundo_inicial;
	int Dia_final, Hora_final, Minuto_final, Segundo_final;
	int nDias, nhoras, nMinutos, nSegundos;
	string Lixo;
	cin >> Lixo >> Dia_inicial;
	cin >> Hora_inicial >> Lixo >> Minuto_inicial >> Lixo >> Segundo_inicial;
	cin >> Lixo >> Dia_final;
	cin >> Hora_final >> Lixo >> Minuto_final >> Lixo >> Segundo_final;
	nSegundos = Segundos(Segundo_final, Segundo_inicial);

	if(Segundo_final < Segundo_inicial) {
		nMinutos = Minutos(Minuto_final - 1, Minuto_inicial);
		Hora_final--;
	} else nMinutos = Minutos(Minuto_final, Minuto_inicial);

	if(Minuto_final < Minuto_inicial) {
		if(Dia_inicial <= Dia_final)
		{
		nhoras = Horas(Hora_final, Hora_inicial);
		}else nhoras = Horas(Hora_final - 1, Hora_inicial);
	} else nhoras = Horas(Hora_final, Hora_inicial);

	if(Hora_final < Hora_inicial) {
	nDias = Dias(Dia_final - 1, Dia_inicial);
	} else nDias = Dias(Dia_final, Dia_inicial);

	cout << nDias << " dia(s)" << endl;
	cout << nhoras << " hora(s)" << endl;
	cout << nMinutos << " minuto(s)" << endl;
	cout << nSegundos << " segundo(s)" << endl;
	return 0;
}
