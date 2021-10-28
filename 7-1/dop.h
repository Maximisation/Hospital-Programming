//
// Created by Maksim on 27.10.2021.
//

#ifndef UNTITLED6_DOP_H
#define UNTITLED6_DOP_H
#include <iostream>
#include <math.h>
class Figure{
public:
    virtual void Perimiter()=0;
    virtual void Surface()=0;
    virtual void Info()=0;
};

class Ellipse: public Figure{
public:
    explicit Ellipse(const double& a, const double& b , const std::string& name): a(a),b(b),name(name) {}

    virtual void Info() override{
        std::cout << "Hi, I am "<<name<< " and I am an Ellipse! I can be described by equation (x/"<<a<<")^2+(y/"<<b<<")^2 = 1"<< std::endl;
    }
    virtual void Perimiter() override{
        std::cout << "My perimiter is: "<< 4*(3.14*a*b+a-b)/(a+b)<<std::endl;
    }
    virtual void Surface() override{
        std::cout << "My surface is: "<<3.14*a*b<<std::endl;
    }
private:
    double a,b;
protected:
    std::string name;
};

class Circle: public Ellipse{
public:
    explicit Circle(const double& r,const std::string& name): r(r), Ellipse(r,r,name){}

    void Info() final{
        std::cout << "Hi, I am "<<name<< " and I am a circle! My radius is "<<r <<std::endl;
    }
    void Perimiter() final{
        std::cout<<"My perimiter is: "<<2*3.14*r<<std::endl;
    }
    void Surface() final{
        std::cout << "My surface is: "<<3.14*r*r<<std::endl;
    }
private:
    double r;
};

class Polygon:public Figure{
public:
    explicit Polygon(const int& n,const std::string& name): n(n),name(name){}

    virtual void Info() override{
        std::cout << "Hi, I am "<< name<<" and I am a polygon! I have "<< n<< "sides" <<std::endl;
    }
private:
    int n;
protected:
    std::string name;
};

class Triangle: public Polygon{
public:
    explicit Triangle(const double& a1,const double& a2,const double& a3,const std::string& name): a1(a1),a2(a2),a3(a3),
                                                                                                   Polygon(3,name){}

    void Info() final{
        std::cout << "Hi, I am "<<name<<" and I am a triangle. My sides are equal to "<< a1<<" "<<a2<<" "<<a3<<std::endl;
    }
    void Perimiter() final{
        std::cout << "My perimiter is: "<<a1+a2+a3<<std::endl;
    }
    void Surface() final{
        std::cout<< "My surface is: "<< sqrt((a1+a2+a3)*(a1+a2-a3)*(a1-a2+a3)*(a2+a3-a1))/4<<std::endl;
    }
private:
    double a1,a2,a3;
};

class Quadrangle:public Polygon{
public:
    explicit Quadrangle(const double& a1,const double& a2,const double& a3,const double& a4, const std::string& name): a1(a1),a2(a2),a3(a3),a4(a4),
                                                                                                                       Polygon(4,name){}
    virtual void Info() override{
        std::cout << "Hi, I am "<<name<<" and I am a quadrangle. My sides are equal to "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<std::endl;
    }
    virtual void Perimiter() override{
        std::cout << "My perimiter is: "<<a1+a2+a3+a4<<std::endl;
    }
    virtual void Surface() override{
        std::cout<<"My surface is: "<<sqrt((-a1+a2+a3+a4)*(a1+a2+a3-a4)*(a1+a2-a3+a4)*(a1-a2+a3+a4))/4<<std::endl;
    }
protected:
    double a1,a2;
private:
    double a3,a4;
};

class Rectangle:public Quadrangle{
public:
    explicit Rectangle(const double& a1,const double& a2,const std::string& name): Quadrangle(a1,a2,0,0,name){}
    virtual void Info() override{
        std::cout << "Hi, I am "<<name<<" and I am a rectangle. My sides are equal to "<<a1<<" "<<a2<< std::endl;
    }
    virtual void Perimiter() override{
        std::cout << "My perimiter is: "<<2*a1+2*a2<<std::endl;
    }
    virtual void Surface() override{
        std::cout <<"My surface is: "<<a1*a2<<std::endl;
    }
};

class Square:public Rectangle{
public:
    explicit Square(const double& a1,const std::string& name): Rectangle(a1,0,name){}
    void Info() final{
        std::cout << "Hi, I am "<<name<<" and I am a square. My side is equal to "<<a1<<std::endl;
    }
    void Perimiter() final{
        std::cout<<"My perimiter is: "<<4*a1<<std::endl;
    }
    void Surface() final{
        std::cout<<"My surface is: "<<a1*a1<<std::endl;
    }
};
#endif //UNTITLED6_DOP_H
