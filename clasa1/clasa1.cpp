#include <iostream>
#include "obiect.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
	obiect casa;
	casa.setNumCamere(4);
	casa.setNumToalete(2);
	casa.setNumAnexe(1);
	casa.setCuloare("portocaliu");
	cout << "casa are camere:" << casa.getNumCamere() << "\n";
	cout << "casa are toalete:" << casa.getNumToalete() << "\n";
	cout << "casa are anexe:" << casa.getNumAnexe() << "\n";
	cout << "casa are culoarea:" << casa.getCuloare() << "\n";
}

