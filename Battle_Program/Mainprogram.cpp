#include<iostream>
#include<ctime>
#include "Hero.h"

using namespace std;


int main()
{
    Hero thor("Thor",1200,80,75);      //Hero(name,HP(1500),Attack(150),Defence(100))
    Hero hulk("Hulk",1200,80,75);      //("Hulk",1400,120,20);
    srand(time(0));

    startBattle(&hulk,&thor);

    return 0;
}

