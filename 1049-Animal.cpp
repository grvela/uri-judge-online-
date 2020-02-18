#include <iostream>
#include <string>
using namespace std;
int main() {
	string Classe, Tipo, Nasc;
	cin >> Classe;
	if(Classe == "vertebrado") {
		cin >> Tipo;
		if(Tipo == "ave") {
			cin >> Nasc;
			if(Nasc == "carnivoro") {
				cout << "aguia" << endl;
				goto fim;
			}
			if(Nasc == "onivoro") {
				cout << "pomba" << endl;
				goto fim;
			}
		}
		if(Tipo == "mamifero") {
			cin >> Nasc;
			if(Nasc == "onivoro") {
				cout << "homem" << endl;
				goto fim;
			}
			if(Nasc == "herbivoro") {
				cout << "vaca" << endl;
				goto fim;
			}
		}
	}
	if(Classe == "invertebrado") {
		cin >> Tipo;
		if(Tipo == "inseto") {
			cin >> Nasc;
			if(Nasc == "hematofago") {
				cout << "pulga" << endl;
				goto fim;
			}
			if(Nasc == "herbivoro") {
				cout << "lagarta" << endl;
				goto fim;
			}
		}
		if(Tipo == "anelideo") {
			cin >> Nasc;
			if(Nasc == "hematofago") {
				cout << "sanguessuga" << endl;
				goto fim;
			}
			if(Nasc == "onivoro") {
				cout << "minhoca" << endl;
				goto fim;
			}
		}
	}
	fim:
	return 0;
}
