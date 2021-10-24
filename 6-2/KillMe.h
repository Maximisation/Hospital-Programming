//
// Created by Maksim on 13.10.2021.
//

#ifndef UNTITLED5_KILLME_H
#define UNTITLED5_KILLME_H
#include <iostream>
#include <string>

class Jesus{
public:
    Jesus(int new_a, int new_b): a(new_a), b(new_b){}

    friend Jesus sokrat(Jesus h){
        int a1=h.a,b1=h.b,m=1;
        int t=abs(std::min(a1,b1));
        for(int i=t;i>1;i--){
            if (a1 % i==0 && b1%i==0){
                m=i;
                break;
            }
        }
        Jesus h1(a1/m,b1/m);
        return h1;
    }

    friend Jesus operator+(Jesus h1,Jesus h2){return sokrat(Jesus(h1.a*h2.b+h1.b*h2.a,h1.b*h2.b));}
    friend Jesus operator+(Jesus h1,int l){return sokrat(Jesus(h1.a+l*h1.b,h1.b));}
    friend Jesus operator+(int l, Jesus h1){return sokrat(Jesus(h1.a+l*h1.b,h1.b));}
    friend Jesus operator-(Jesus h){return sokrat(Jesus(-h.a,h.b));}
    friend Jesus operator-(Jesus h1,Jesus h2){return sokrat(Jesus(h1.a*h2.b-h1.b*h2.a,h1.b*h2.b));}
    friend Jesus operator-(Jesus h1,int l){return sokrat(Jesus(h1.a-l*h1.b,h1.b));}
    friend Jesus operator-(int l, Jesus h1){return sokrat(Jesus(l*h1.b-h1.a,h1.b));}
    friend Jesus operator*(Jesus h1,Jesus h2){return sokrat(Jesus(h1.a*h2.a,h1.b*h2.b));}
    friend Jesus operator*(Jesus h1,int l){return sokrat(Jesus(h1.a*l,h1.b));}
    friend Jesus operator*(int l,Jesus h1){return sokrat(Jesus(h1.a*l,h1.b));}
    friend Jesus operator/(Jesus h1,Jesus h2){return sokrat(Jesus(h1.a*h2.b,h1.b*h2.a));}
    friend Jesus operator/(Jesus h1,int l){return sokrat(Jesus(h1.a,h1.b*l));}
    friend Jesus operator/(int l,Jesus h1){return sokrat(Jesus(h1.b*l,h1.a));}
    friend bool operator>(Jesus h1,Jesus h2);
    friend bool operator>(Jesus h,int l);
    friend bool operator>(int l, Jesus h);
    friend bool operator<(Jesus h1,Jesus h2);
    friend bool operator<(Jesus h,int l);
    friend bool operator<(int l, Jesus h);

    explicit operator double() const {
        return double(a)/double(b);
    }

    Jesus& operator++( );
    Jesus& operator--( );
    Jesus operator++(int );
    Jesus operator--(int );


    friend std::ostream& operator<<(std::ostream& ostr, Jesus& h){
        h= sokrat(h);
        return ostr<<h.a<<"/"<<h.b;
    }


private:
    int a;
    int b;
};

#endif //UNTITLED5_KILLME_H
