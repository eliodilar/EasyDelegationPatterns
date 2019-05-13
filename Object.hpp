/*
 * Object.hpp
 *
 *  Created on: 6 déc. 2018
 *      Author: chapoul
 */

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>

using namespace std;

class Sound_Interface{
	public:
		Sound_Interface(){};
		virtual ~Sound_Interface(){};

	virtual void Make_Sound() = 0;

};


class sound1: public Sound_Interface{

	public:
		sound1(){};
		~sound1(){};

		void Make_Sound(){cout<<"aaaaa"<<endl;};

};

class sound2: public Sound_Interface{

	public:
		sound2(){};
		~sound2(){};

		void Make_Sound(){cout<<"bbbbbb"<<endl;};

};

class Sound_Delegator{

	public:

	Sound_Interface *Used_Sound = new sound1();

		Sound_Delegator(){};
		~Sound_Delegator(){};

		void Make_Sound(){this->Used_Sound->Make_Sound();};

		void Set_Sound(Sound_Interface* NewSound){this->Used_Sound = NewSound;};

};



#endif /* OBJECT_HPP_ */
