//============================================================================
// Name        : DelegationPattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Object.hpp"

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Sound_Delegator *New_Sound_Delegator = new Sound_Delegator;

	New_Sound_Delegator->Make_Sound();

	sound2 * New_Sound2 = new sound2;

	New_Sound_Delegator->Set_Sound(New_Sound2);

	New_Sound_Delegator->Make_Sound();

	cout<<"end program"<<endl;


	return 0;
}
