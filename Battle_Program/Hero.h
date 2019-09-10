#include<iostream>
#include<fstream>
using namespace std;

class Hero{
private:
        string name;
        float Hitpoint;
        float Attack;
        float Defence;
public:
        Hero(string,float,float,float);//Valued constructor
        Hero();                        //Default constructor - Masked hero
        float GetHP();                 //Getter funcs
        float GetAtt();
        float GetDef();
        string GetName();
        void SetHP(float HP);         //Setter funcs  
        void SetAtt(float Att);
        void SetDef(float Def);
        void SetName(string name);
        float Defpoint();             //Calc Diffence value
        float Attpoint();             //Calc Attack val
};

void startBattle(Hero*,Hero*);        //Battle func - Initiates battle and continues till one is dead    


