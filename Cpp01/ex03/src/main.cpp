#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
 {
	Weapon bonk = Weapon("spiky bonk");
	HumanA fuwawa("Fuwawa", bonk);
	fuwawa.attack();
	bonk.setType("some other type of bonk");
	fuwawa.attack();
 }
 {
	Weapon club = Weapon("spiky bonk");
	HumanB mococo("Mococo");
	mococo.attack();
	mococo.setWeapon(club);
	mococo.attack();
	club.setType("some other type of bonk");
	mococo.attack();

}
return(0);
}