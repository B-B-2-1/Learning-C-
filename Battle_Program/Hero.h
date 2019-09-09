#include<iostream>
using namespace std;

class Hero{
private:
        string name;
        float Hitpoint;
        float Attack;
        float Defence;
public:
        Hero(string,float,float,float);
        Hero();
        float GetHP();
        float GetAtt();
        float GetDef();
        string GetName();
        void SetHP(float HP);
        void SetAtt(float Att);
        void SetDef(float Def);
        void SetName(string name);
        float Defpoint();
        float Attpoint();

};
void startBattle(Hero*,Hero*);


