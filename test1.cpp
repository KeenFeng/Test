#include <stdio.h>
#include <string>
using std::string;

class Actress {
public:
    Actress(int h, int w, int a):height(h),weight(w),age(a){};

    virtual void desc() {
        printf("height:%d weight:%d age:%d\n", height, weight, age);
    }

    int height; 
    int weight; 
    int age;    
};

class Sensei: public Actress {
public:
    Sensei(int h, int w, int a, string c):Actress(h, w, a),cup(c){};
    virtual void desc() {
        printf("height:%d weight:%d age:%d cup:%s\n", height, weight, age, cup.c_str());
    }
    string cup;

};

int main() {
    Sensei s(168, 50, 21, "35D");

    s.desc();
    return 0;
}