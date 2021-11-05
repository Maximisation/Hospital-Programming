//
// Created by Maksim on 05.11.2021.
//

#ifndef UNTITLED7_DATE_H
#define UNTITLED7_DATE_H
class NoMonth:public std::exception{
public:
    const char* what() const noexcept override {
        return "Error: there is no such month!";
    }
};
class NoDay:public std::exception{
public:
    const char* what() const noexcept override {
        return "Error: there is no such day!";
    }
};
class IdoNotAcknowledge2020:public std::exception{
public:
    const char* what() const noexcept override {
        return "Error: year 2020 doesn't exist!";
    }
};

class Date{
public:
    Date(int day,int month,int year){
        if (year==2020){throw IdoNotAcknowledge2020();}
        else{y=year;}
        if (month<1 || month>12){throw NoMonth();}
        else{m=month;}
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (0 < day) && (day < 32)){
            d = day;
        }
        else if((month == 4 || month == 6 || month == 9 || month == 11) && (0 < day) && (day < 31)){
            d = day;
        }
        else if((month == 2)&& (0 < day) && (day < 29) && (year % 4 || (year % 100 == 0 && year % 400))){
            d = day;
        }
        else if((month == 2)&& (0 < day) && (day < 30) && (year % 4 == 0 || year % 400 == 0)){
            d = day;
        }
        else{
            throw NoDay();
        }
    }
    int get_day() const{
        return d;
    }
    int get_month() const{
        return m;
    }
    int get_year() const{
        return y;
    }
    friend bool operator> (Date h1, Date h2){
        if(h1.y!=h2.y){return h1.y>h2.y;}
        else{
            if(h1.m!=h2.m){return h1.m>h2.m;}
            else{return h1.d>h2.d;}
        }
    }
    friend bool operator< (Date h1, Date h2){
        if(h1.y!=h2.y){return h1.y<h2.y;}
        else{
            if(h1.m!=h2.m){return h1.m<h2.m;}
            else{return h1.d<h2.d;}
        }
    }
    friend std::ostream& operator<<(std::ostream& out, const Date& d){
        std::cout << d.d << "/" << d.m << "/" << d.y << std::endl;
        return out;
    }
private:
    int d,m,y;
};
#endif //UNTITLED7_DATE_H
