//
//  point2D.cpp
//  TP1C++
//
//  Created by Gustavo Guerrero on 15/09/2019.
//  Copyright © 2019 Gustavo Guerrero. All rights reserved.
//


#include "point2D.h"

using namespace std;

point2D::point2D(){
    this->x = 0;
    this->y = 0;
}
point2D::point2D(double a, double b){
    this->x = a;
    this->y = b;
}
double point2D::CalculeNorme(){
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}
void point2D::print(){
    cout << "X = " << this->x <<", Y = "<< this->y << "\n";
}

double point2D::get_x(){
    return this->x;
}
double point2D::get_y(){
    return this->y;
}
void point2D::set_x(double a){
    this->x = a;
}
void point2D::set_y(double b){
    this->y = b;
}

point2D & point2D::operator=(const point2D &Px)
{
    if(this != &Px){
        this->x = Px.x;
        this->y = Px.y;
    }
    return *this;
}

point2D & point2D::operator+=(const point2D &Px)
{
    this->x += Px.x;
    this->y += Px.y;
    return *this;
}


bool point2D::operator==(const point2D &Px)
{
    if((this->x == Px.x)&&(this->y == Px.y)){
        return 1;
    }else{
        return 0;
    }
}


point2D::~point2D()
{

}

