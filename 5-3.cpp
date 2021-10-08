//
// Created by Maksim on 08.10.2021.
//

#include <iostream>
#include <cmath>

class Energy{
private:
    double v;
    static double erg; static double ev;
public:
    Energy(double v1): v(v1) {}
    double J_erg() const{
        return v * erg;
    }
    double J_ev() const{
        return v * ev;
    }
    void value_erg(double value){
        this->v = value / erg;
    }
    void value_ev(double value){
        this->v = value / ev;
    }
};

double Energy::erg = pow(10, 7);
double Energy::ev = 6.24 * pow(10, 18);

int main(){
    double J;
    std::cout << "Enter energy (Yes it's energy because I have no imagination) value in Joules: ";
    std::cin >> J;
    Energy energy(J);
    std::cout << "Energy converted to erg is: " << energy.J_erg() << std::endl;
    std::cout << "Energy converted to ev is: " << energy.J_ev() << std::endl;
}