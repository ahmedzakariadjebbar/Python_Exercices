//
//  point2D.h
//  TP1C++
//
//  Created by Gustavo Guerrero on 15/09/2019.
//  Copyright © 2019 Gustavo Guerrero. All rights reserved.
//

#ifndef POINT2D_H
#define POINT2D_H
#include <stdio.h>
#include <iostream>
#include <tgmath.h>

class point2D
{
public:
    //Constructeur
    point2D();
    point2D(double a, double b);

    
    //Méthodes
    double CalculeNorme();
    void print();
    double get_x();
    double get_y();
    void set_x(double a);
    void set_y(double b);
    ~point2D();

    /** @brief Surcharge de l'opÈrateur d'affectation.
     *  @param const point2D& p2.
     */
    //   point2D operator=( const point2D& p2 );
    
    point2D & operator=(const point2D & p2);
    
    /** @brief Surcharge de l'opÈrateur +=.
     */
    
    point2D & operator+=(const point2D& p2 );
    
    /** @brief Surcharge de l'opÈrateur ==.
     */
    bool operator==(const point2D& p2);
    
protected:
    //Attribut
    double x;
    double y;
    
private:
};

#endif // POINT2D_H
