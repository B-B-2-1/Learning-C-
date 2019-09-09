#include<iostream>
#include<ctime>
#include "Hero.h"

using namespace std;


int main()
{
    Hero thor("Thor",120,115,75);
    Hero Hulk("Hulk",140,120,20);
    srand(time(0));

    startBattle(&Hulk,&thor);

    return 0;
}

