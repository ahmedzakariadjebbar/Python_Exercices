#ifndef POINT2D_H
#define POINT2D_H

class point2D
{
    public:
        point2D();
        point2D(double a, double b);
        double CalculeNorme();
        void print();
        ~point2D();
        double get_x();
        double get_y();
        void set_x(double a);
        void set_y(double b);

     /** @brief Surcharge de l'opérateur d'affectation.
      *  @param const point2D& p2.
     */
     //   point2D operator=( const point2D& p2 );

        point2D & operator= (const point2D & p2);

     /** @brief Surcharge de l'opérateur +=.
      */

       point2D& operator+=( const point2D& p2 );

      /** @brief Surcharge de l'opérateur ==.
      */
       bool operator==( const point2D& p2 );



    protected:
        double x;
        double y;

    private:
};

#endif // POINT2D_H
