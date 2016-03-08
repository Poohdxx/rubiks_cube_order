//block.h
#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

class Block{
public:
    int x;
    int y;
    int z;
public:
    Block(int,int,int);
    void rotate_x();
    void rotate_y();
    void rotate_z();
};

class Cube{
public:
    Block* p[27];
public:
    Cube();
    void C_U();
    void C_R();
    void C_F();
    void C_D();
    void C_L();
    void C_B();
    void C_E();
    void C_M();
    void C_S();
    void C_x();
    void C_y();
    void C_z();
    void A_U();
    void A_R();
    void A_F();
    void A_D();
    void A_L();
    void A_B();
    void A_E();
    void A_M();
    void A_S();
    void A_x();
    void A_y();
    void A_z();
};

#endif // BLOCK_H_INCLUDED

