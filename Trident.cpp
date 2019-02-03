/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "Trident.h"

double Trident::hit(double armor) 
{	
double damage;

	if(armor < 10)
	{
	
	damage = hitPoints*2;
	

	}
	
	if(armor >=  10)
	{
     damage = hitPoints - armor;
	}


    if (damage < 0) 
	{


        return 0;
    	}


    return damage;
}
