#include "Dice.h"
#include <ctime>        
#include <cstdlib>
                     //include headers required to generate random numbers



float Dice::average(){
}

int Dice::Getarray(){                                 //array  method

}

Dice::Dice()
{
	
}
int Dice :: Getroll(){                        //random number method
	srand(time(0));
	return ( rand()%6 )+1;            // return random number generated

}


Dice::~Dice()
{
}
