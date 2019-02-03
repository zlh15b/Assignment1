/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) 
{	
double damage;

	if(armor < 30)
	{
	
	damage = hitPoints;
	

	}
	
	if(armor >=  30)
	{
     damage = hitPoints - armor;
	}


    if (damage < 0) 
	{


        return 0;
    	}


    return damage;
}

