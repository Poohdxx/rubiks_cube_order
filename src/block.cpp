//block.cpp
#include "block.h"

Block::Block(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
}

void Block::rotate_x(){
    int temp;
    temp = this->y;
    this->y = this->z;
    this->z = temp;
}

void Block::rotate_y(){
    int temp;
    temp = this->z;
    this->z = this->x;
    this->x = temp;
}

void Block::rotate_z(){
    int temp;
    temp = this->x;
    this->x = this->y;
    this->y = temp;
}

Block byo(2,3,6);
Block nyo(0,3,6);
Block gyo(1,3,6);
Block byn(2,3,0);
Block nyn(0,3,0);
Block gyn(1,3,0);
Block byr(2,3,5);
Block nyr(0,3,5);
Block gyr(1,3,5);
Block bno(2,0,6);
Block nno(0,0,6);
Block gno(1,0,6);
Block bnn(2,0,0);
Block nnn(0,0,0);
Block gnn(1,0,0);
Block bnr(2,0,5);
Block nnr(0,0,5);
Block gnr(1,0,5);
Block bwo(2,4,6);
Block nwo(0,4,6);
Block gwo(1,4,6);
Block bwn(2,4,0);
Block nwn(0,4,0);
Block gwn(1,4,0);
Block bwr(2,4,5);
Block nwr(0,4,5);
Block gwr(1,4,5);

Cube::Cube(){
    p[0] = &byo;
    p[1] = &nyo;
    p[2] = &gyo;
    p[3] = &byn;
    p[4] = &nyn;
    p[5] = &gyn;
    p[6] = &byr;
    p[7] = &nyr;
    p[8] = &gyr;
    p[9] = &bno;
    p[10] = &nno;
    p[11] = &gno;
    p[12] = &bnn;
    p[13] = &nnn;
    p[14] = &gnn;
    p[15] = &bnr;
    p[16] = &nnr;
    p[17] = &gnr;
    p[18] = &bwo;
    p[19] = &nwo;
    p[20] = &gwo;
    p[21] = &bwn;
    p[22] = &nwn;
    p[23] = &gwn;
    p[24] = &bwr;
    p[25] = &nwr;
    p[26] = &gwr;
}

void Cube::C_U(){
    Block* temp_corner = p[0];
    p[0]=p[6]; p[6]=p[8]; p[8]=p[2]; p[2]=temp_corner;
    Block* temp_len = p[1];
    p[1]=p[3]; p[3]=p[7]; p[7]=p[5]; p[5]=temp_len;
    p[0]->rotate_y(); p[6]->rotate_y(); p[8]->rotate_y(); p[2]->rotate_y();
    p[1]->rotate_y(); p[3]->rotate_y(); p[7]->rotate_y(); p[5]->rotate_y();
}

void Cube::A_U(){
    Cube::C_U(); Cube::C_U(); Cube::C_U();
}

void Cube::C_R(){
    Block* temp_corner = p[2];
    p[2]=p[8]; p[8]=p[26]; p[26]=p[20]; p[20]=temp_corner;
    Block* temp_len = p[5];
    p[5]=p[17]; p[17]=p[23]; p[23]=p[11]; p[11]=temp_len;
    p[2]->rotate_x(); p[8]->rotate_x(); p[26]->rotate_x(); p[20]->rotate_x();
    p[5]->rotate_x(); p[17]->rotate_x(); p[23]->rotate_x(); p[11]->rotate_x();
}

void Cube::A_R(){
    Cube::C_R(); Cube::C_R(); Cube::C_R();
}

void Cube::C_F(){
    Block* temp_corner = p[6];
    p[6]=p[24]; p[24]=p[26]; p[26]=p[8]; p[8]=temp_corner;
    Block* temp_len = p[7];
    p[7]=p[15]; p[15]=p[25]; p[25]=p[17]; p[17]=temp_len;
    p[6]->rotate_z(); p[24]->rotate_z(); p[26]->rotate_z(); p[8]->rotate_z();
    p[7]->rotate_z(); p[15]->rotate_z(); p[25]->rotate_z(); p[17]->rotate_z();
}

void Cube::A_F(){
    Cube::C_F(); Cube::C_F(); Cube::C_F();
}

void Cube::C_D(){
    Block* temp_corner = p[18];
    p[18]=p[20]; p[20]=p[26]; p[26]=p[24]; p[24]=temp_corner;
    Block* temp_len = p[19];
    p[19]=p[23]; p[23]=p[25]; p[25]=p[21]; p[21]=temp_len;
    p[18]->rotate_y(); p[20]->rotate_y(); p[26]->rotate_y(); p[24]->rotate_y();
    p[19]->rotate_y(); p[23]->rotate_y(); p[25]->rotate_y(); p[21]->rotate_y();
}

void Cube::A_D(){
    Cube::C_D(); Cube::C_D(); Cube::C_D();
}

void Cube::C_L(){
    Block* temp_corner = p[0];
    p[0]=p[18]; p[18]=p[24]; p[24]=p[6]; p[6]=temp_corner;
    Block* temp_len = p[3];
    p[3]=p[9]; p[9]=p[21]; p[21]=p[15]; p[15]=temp_len;
    p[0]->rotate_x(); p[18]->rotate_x(); p[24]->rotate_x(); p[6]->rotate_x();
    p[3]->rotate_x(); p[9]->rotate_x(); p[21]->rotate_x(); p[15]->rotate_x();
}

void Cube::A_L(){
    Cube::C_L(); Cube::C_L(); Cube::C_L();
}

void Cube::C_B(){
    Block* temp_corner = p[0];
    p[0]=p[2]; p[2]=p[20]; p[20]=p[18]; p[18]=temp_corner;
    Block* temp_len = p[1];
    p[1]=p[11]; p[11]=p[19]; p[19]=p[9]; p[9]=temp_len;
    p[0]->rotate_z(); p[2]->rotate_z(); p[20]->rotate_z(); p[18]->rotate_z();
    p[1]->rotate_z(); p[11]->rotate_z(); p[19]->rotate_z(); p[9]->rotate_z();
}

void Cube::A_B(){
    Cube::C_B(); Cube::C_B(); Cube::C_B();
}

void Cube::C_E(){
    Block* temp_corner = p[9];
    p[9]=p[11]; p[11]=p[17]; p[17]=p[15]; p[15]=temp_corner;
    Block* temp_len = p[10];
    p[10]=p[14]; p[14]=p[16]; p[16]=p[12]; p[12]=temp_len;
    p[9]->rotate_y(); p[11]->rotate_y(); p[17]->rotate_y(); p[15]->rotate_y();
    p[10]->rotate_y(); p[14]->rotate_y(); p[16]->rotate_y(); p[12]->rotate_y();
}

void Cube::A_E(){
    Cube::C_E(); Cube::C_E(); Cube::C_E();
}

void Cube::C_M(){
    Block* temp_corner = p[1];
    p[1]=p[19]; p[19]=p[25]; p[25]=p[7]; p[7]=temp_corner;
    Block* temp_len = p[4];
    p[4]=p[10]; p[10]=p[22]; p[22]=p[16]; p[16]=temp_len;
    p[1]->rotate_x(); p[19]->rotate_x(); p[25]->rotate_x(); p[7]->rotate_x();
    p[4]->rotate_x(); p[10]->rotate_x(); p[22]->rotate_x(); p[16]->rotate_x();
}

void Cube::A_M(){
    Cube::C_M(); Cube::C_M(); Cube::C_M();
}

void Cube::A_S(){
    Block* temp_corner = p[3];
    p[3]=p[5]; p[5]=p[23]; p[23]=p[21]; p[21]=temp_corner;
    Block* temp_len = p[4];
    p[4]=p[14]; p[14]=p[22]; p[22]=p[12]; p[12]=temp_len;
    p[3]->rotate_z(); p[5]->rotate_z(); p[23]->rotate_z(); p[21]->rotate_z();
    p[4]->rotate_z(); p[14]->rotate_z(); p[22]->rotate_z(); p[12]->rotate_z();
}

void Cube::C_S(){
    Cube::A_S(); Cube::A_S(); Cube::A_S();
}

void Cube::C_x(){
    Cube::C_R();
    Cube::A_M();
    Cube::A_L();
}

void Cube::A_x(){
    Cube::C_x(); Cube::C_x(); Cube::C_x();
}

void Cube::C_y(){
    Cube::C_U();
    Cube::A_E();
    Cube::A_D();
}

void Cube::A_y(){
    Cube::C_y(); Cube::C_y(); Cube::C_y();
}

void Cube::C_z(){
    Cube::C_F();
    Cube::C_S();
    Cube::A_B();
}

void Cube::A_z(){
    Cube::C_z(); Cube::C_z(); Cube::C_z();
}

