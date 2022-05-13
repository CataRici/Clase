#include "obiect.h"
using namespace std;

//definition setters function
void obiect:: setNumCamere(int numCamere) {
	this-> numCamere = numCamere;
}
void obiect:: setNumToalete(int numToalete) {
	this-> numToalete = numToalete;
}
void obiect:: setNumAnexe(int numAnexe) {
	this-> numAnexe = numAnexe;
}
void obiect::setCuloare(string culoare) {
	this-> culoare = culoare;
}

//definition getters function
int obiect:: getNumCamere() {
	return numCamere;
}
int obiect:: getNumToalete() {
	return numToalete;
}
int obiect:: getNumAnexe() {
	return numAnexe;
}
string obiect:: getCuloare() {
	return culoare;
}
