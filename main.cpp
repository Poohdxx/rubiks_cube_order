//main.cpp
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "block.h"

using namespace std;

Block* q[27];

bool isBack(Cube* a){
    for (int i=0; i<27; i++){
        if ((a->p[i]->x) != (q[i]->x)) return 0;
        if ((a->p[i]->y) != (q[i]->y)) return 0;
        if ((a->p[i]->y) != (q[i]->y)) return 0;
    }
    return 1;
}

vector<string> seq;

void getfun(vector<string> &seq){
    string fn;
    seq.clear();
    getline(cin, fn);
    for (int i=0; i<fn.size(); i++){
        if (fn.at(i)==' '){
            seq.push_back(fn.substr(0,i));
            fn=fn.substr(i+1);
            i=0;
        }
    }
    if (!fn.empty()) seq.push_back(fn);
}

void func(Cube* ptrcube, vector<string> seq){
    while(!seq.empty()){
        if(seq.at(0)=="r") ptrcube->C_R();
        else if(seq.at(0)=="r'") ptrcube->A_R();
        else if(seq.at(0)=="u") ptrcube->C_U();
        else if(seq.at(0)=="u'") ptrcube->A_U();
        else if(seq.at(0)=="f") ptrcube->C_F();
        else if(seq.at(0)=="f'") ptrcube->A_F();
        else if(seq.at(0)=="l") ptrcube->C_L();
        else if(seq.at(0)=="l'") ptrcube->A_L();
        else if(seq.at(0)=="b") ptrcube->C_B();
        else if(seq.at(0)=="b'") ptrcube->A_B();
        else if(seq.at(0)=="d") ptrcube->C_D();
        else if(seq.at(0)=="d'") ptrcube->A_D();
        else if(seq.at(0)=="e") ptrcube->C_E();
        else if(seq.at(0)=="e'") ptrcube->A_E();
        else if(seq.at(0)=="m") ptrcube->C_M();
        else if(seq.at(0)=="m'") ptrcube->A_M();
        else if(seq.at(0)=="s") ptrcube->C_S();
        else if(seq.at(0)=="s'") ptrcube->A_S();
        else if(seq.at(0)=="x") ptrcube->C_x();
        else if(seq.at(0)=="x'") ptrcube->A_x();
        else if(seq.at(0)=="y") ptrcube->C_y();
        else if(seq.at(0)=="y'") ptrcube->A_y();
        else if(seq.at(0)=="z") ptrcube->C_z();
        else if(seq.at(0)=="z'") ptrcube->A_z();
        else if(seq.at(0)=="exit") exit(0);
        else;
        seq.erase(seq.begin());
        }
}

void information(){
    cout<<"***************************************************"<<endl;
    cout<<"Type operations use lower case letters."<<endl;
    cout<<"Supported operations are: r r' u u' f f' l l' d d' b b' e e' m m' s s' x x' y y' z z'."<<endl;
    cout<<"Exactly ONE space between each operation."<<endl;
    cout<<"Type \"exit\" to exit." << endl;
    cout<<"***************************************************"<<endl;
}

int main()
{
    Block Obyo(2,3,6);
    Block Onyo(0,3,6);
    Block Ogyo(1,3,6);
    Block Obyn(2,3,0);
    Block Onyn(0,3,0);
    Block Ogyn(1,3,0);
    Block Obyr(2,3,5);
    Block Onyr(0,3,5);
    Block Ogyr(1,3,5);
    Block Obno(2,0,6);
    Block Onno(0,0,6);
    Block Ogno(1,0,6);
    Block Obnn(2,0,0);
    Block Onnn(0,0,0);
    Block Ognn(1,0,0);
    Block Obnr(2,0,5);
    Block Onnr(0,0,5);
    Block Ognr(1,0,5);
    Block Obwo(2,4,6);
    Block Onwo(0,4,6);
    Block Ogwo(1,4,6);
    Block Obwn(2,4,0);
    Block Onwn(0,4,0);
    Block Ogwn(1,4,0);
    Block Obwr(2,4,5);
    Block Onwr(0,4,5);
    Block Ogwr(1,4,5);
    q[0] = &Obyo;
    q[1] = &Onyo;
    q[2] = &Ogyo;
    q[3] = &Obyn;
    q[4] = &Onyn;
    q[5] = &Ogyn;
    q[6] = &Obyr;
    q[7] = &Onyr;
    q[8] = &Ogyr;
    q[9] = &Obno;
    q[10] = &Onno;
    q[11] = &Ogno;
    q[12] = &Obnn;
    q[13] = &Onnn;
    q[14] = &Ognn;
    q[15] = &Obnr;
    q[16] = &Onnr;
    q[17] = &Ognr;
    q[18] = &Obwo;
    q[19] = &Onwo;
    q[20] = &Ogwo;
    q[21] = &Obwn;
    q[22] = &Onwn;
    q[23] = &Ogwn;
    q[24] = &Obwr;
    q[25] = &Onwr;
    q[26] = &Ogwr;
    information();
    while(1){
        getfun(seq);
        Cube test;
        Cube* ptr1 = &test;
        long unsigned number = 0;
        do {
            func(ptr1,seq);
            number++;
        } while (!isBack(ptr1));
        cout<<"Total number: "<<number<<endl<<endl;
    }
    return 0;
}

