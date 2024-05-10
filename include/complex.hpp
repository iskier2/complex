//
// Created by Iskra on 20.04.2024.
//

#ifndef COMPLEX_1_COMPLEX_HPP
#define COMPLEX_1_COMPLEX_HPP
class Complex{
public:
    Complex(const double& re, const double& im):re_(re),im_(im){};
    explicit Complex(const double data[]):Complex(data[0],data[1]){};
    [[nodiscard]] double re() const {return re_;};
    [[nodiscard]] double im() const {return im_;};
private:
    double re_;
    double im_;
};
#endif //COMPLEX_1_COMPLEX_HPP
