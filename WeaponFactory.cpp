/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.h"
<<<<<<< HEAD
#include "Trident.h"
#include "CrazyRandomSword.h"
=======
<<<<<<< HEAD
#include "Trident.h"
=======
>>>>>>> 511c4673ff5bbfd2d93c0784a1647313a2cd658f
>>>>>>> 25afbe37ddea56ddc59f6bc68ac20ec86be4ff71

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if(name.compare("hammer") == 0) {
	return new SimpleHammer();
    }

<<<<<<< HEAD
    if(name.compare("trident") == 0) {
	return new Trident();
	}
	
   if(name.compare("crazyrandomsword") == 0) {
	return new CrazyRandomSword();
	}
=======
<<<<<<< HEAD
    if(name.compare("trident") == 0) {
	return new Trident();
	}

=======
>>>>>>> 511c4673ff5bbfd2d93c0784a1647313a2cd658f
>>>>>>> 25afbe37ddea56ddc59f6bc68ac20ec86be4ff71
    throw "Invalid weapon";
}
