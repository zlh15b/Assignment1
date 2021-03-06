/* 
 * File:   CommonSpear.h
 * Author: Javier <jrescobara@gmail.com>
 *
 * Created on September 27, 2017, 4:15 PM
 */

#include <string>
#include "Weapon.h"

#ifndef TRIDENT_H
#define TRIDENT_H

/**
 * Defines the behavior of a common spear (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class Trident : public Weapon {
public:

    Trident() : Weapon("trident", 50.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~Trident() {};

    virtual double hit(double armor);

};

#endif /* TRIDENT_H */

