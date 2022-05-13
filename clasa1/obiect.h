#ifndef OBIECT_H
#define OBIECT_H
#include <string>
using namespace std;

class obiect{
private: // fields, atributes, members
	int numCamere;
	int numAnexe;
	int numToalete;
	string culoare;

public:
	void setNumCamere(int numCamere);  //setters function
	void setNumToalete(int numToalete);
	void setNumAnexe(int numAnexe);
	void setCuloare(string culoare);

	int getNumCamere(); //getters function
	int getNumToalete();
	int getNumAnexe();
	string getCuloare();
};

#endif

