/* 
 * File:   CommonSpear.cpp
 * Author: Javier <jrescobara@gmail.com>
 * 
 * Created on September 27, 2017, 4:15 PM
 */

#include "CrazyRandomSword.h"
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <iostream>

using namespace std;
double CrazyRandomSword::hit(double armor) 
{
	double hitpoints = rand(); 
	
	double randoma = rand() % static_cast<int>(armor) +2;

	double damage = hitPoints - randoma ;
	cout << hitpoints << endl;    
	if (damage < 0) 
	{
        	return 0;
    	}	
    
	return damage;
}
