/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"
#include "ctime"
#include "iomanip"
#include "cstdlib"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("crazyrandomsword", hitPoints) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
	double hitPoints = rand() % 100 +7;
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CrazyRandomSword*/
