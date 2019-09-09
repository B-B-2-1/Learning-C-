#include "Hero.h"

using namespace std;

Hero::Hero(string name,float HP,float Att,float Def)
{
    this->name = name;
    if(HP <= 150)
    this->Hitpoint = HP;
    else this->Hitpoint = 150;

    if(Def<=100)
    this->Defence = Def;
    else this->Defence = 50;

    if(Att<=150)
    this->Attack = Att;
    else this->Attack = 100;
}

Hero::Hero()
{
    this->name = "Masked Hero";
    this->Hitpoint = (70 + rand())%150;
    this->Defence = (50 + rand())%100;
    this->Attack = (70 + rand())%150;
}

float Hero::GetHP(){
    return this->Hitpoint;
}

float Hero::GetAtt(){
    return this->Attack;
}
float Hero::GetDef(){
    return this->Defence;
}
string Hero::GetName(){
    return this->name;
}

void Hero::SetHP(float HP){
    this->Hitpoint = HP;
}
void Hero::SetAtt(float Att){
    this->Attack = Att;
}
void Hero::SetDef(float Def){
    this->Defence = Def;
}
void Hero::SetName(string name){
    this->name = name;
}
float Hero::Attpoint(){
    float retval = this->GetAtt();
    float p = float(70 + rand()%30);
    p = p/100;
    return retval*p;
}
float Hero::Defpoint(){
    float mis= (float)(rand()%101);
    mis/=100;
    mis*=this->GetDef();
    if(mis<10) mis = 0;
    if(mis >= this->GetDef()-2)mis = 10000;
    return mis;
}

void startBattle(Hero* A,Hero* B)
{
    while(A->GetHP()>0 && B->GetHP()>0)
    {
        float att = A->Attpoint();
        float def = B->Defpoint();
        float loss = att - def;
        if(loss<0)loss = 0;

        B->SetHP(B->GetHP() - loss);
        if(B->GetHP()<0) 
            B->SetHP(0.00);

        cout<<A->GetName()<<" Attacked "<<B->GetName()<<" with power "<<att<<endl;
        if(loss == 0)
        cout<<B->GetName()<<" Blocked the attack"<<endl;
        else 
        cout<<B->GetName()<<"'s Defence absorbed "<<def<<" points"<<endl;

        cout<<B->GetName()<<" has "<<B->GetHP()<<" HP remaining"<<endl;

        if(B->GetHP() == 0)
        {
            cout<<"Battle Over."<<A->GetName()<<" is the winner"<<endl;
            break;
        }
        Hero* temp = A;
        A = B;
        B = temp;
    }
    return;
}