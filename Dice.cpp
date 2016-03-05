#include "Dice.h"
#include <ctime>
#include <cstdlib>



Dice::Dice()
{
	
}
int Dice :: Getroll(){
	srand(time(0));
	return ( rand()%6 )+1;

}


Dice::~Dice()
{
}
