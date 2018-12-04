//
// Created by vscilab on 10/25/2018.
//

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H
#include<cstdint> //allows to use int64_t
#include <iostream>
using std::cout;

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
class Fraction{
public:
    Fraction(int64_t num, int64_t dem){
        this->numerator = num; //assigning the num to num
        this->denominator = dem; //assigning the denominator to dem
    };
public:
    int64_t getNumerator() const { return numerator;}
    int64_t getDenominator() const { return denominator;}

    double getRealValue() const{}

    void setNumerator(int64_t num){
        numerator = num;
    }
    void setDenominator(int64_t dem){
        denominator = dem;
    }

    void output() const {
        {
            if ( numerator == 0 && denominator == 0)
                cout << "NAN" ;

            else if ( denominator == 0)
                cout << "INF" ;

            else if(numerator == 0)
                cout << "0";
            else {
                int64_t y1 = numerator;
                int64_t y2 = denominator;
                int64_t temp;

                while (y2 != 0) {
                    temp = y2;
                    y2 = y1 % y2;
                    y1 = temp;
                }
                cout << (numerator / y1) << " / " << (denominator / y1);
            }

        }
    }
private:
    int64_t numerator;
    int64_t denominator;
};

                }}}}
#endif //FRACTION_FRACTION_H