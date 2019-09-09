// Hero::Hero(string name,float HP,float Att,float Def)
// {
//     this->name = name;
//     if(HP <= 150)
//     this->Hitpoint = HP;
//     else this->Hitpoint = 150;

//     if(Def<=100)
//     this->Defence = Def;
//     else this->Defence = 50;

//     if(Att<=150)
//     this->Attack = Att;
//     else this->Attack = 100;
// }

// Hero::Hero()
// {
//     this->name = "Masked Hero";
//     this->Hitpoint = (70 + rand())%150;
//     this->Defence = (50 + rand())%100;
//     this->Attack = (70 + rand())%150;
// }

// float Hero::GetHP(){
//     return this->Hitpoint;
// }

// float Hero::GetAtt(){
//     return this->Attack;
// }
// float Hero::GetDef(){
//     return this->Defence;
// }
// string Hero::GetName(){
//     return this->name;
// }

// void Hero::SetHP(float HP){
//     this->Hitpoint = HP;
// }
// void Hero::SetAtt(float Att){
//     this->Attack = Att;
// }
// void Hero::SetDef(float Def){
//     this->Defence = Def;
// }
// void Hero::SetName(string name){
//     this->name = name;
// }
// float Hero::Attpoint(){
//     float retval = this->GetAtt();
//     float p = float(70 + rand()%30);
//     p = p/100;
//     return retval*p;
// }
// float Hero::Defpoint(){
//     float mis= (float)(rand()%101);
//     mis/=100;
//     mis*=this->GetDef();
//     if(mis<10) mis = 0;
//     if(mis >= this->GetDef()-2)mis = 10000;
//     return mis;
// }