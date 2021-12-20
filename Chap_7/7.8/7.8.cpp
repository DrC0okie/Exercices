#include <iostream>

class C
{
    private:
        int valeur;
        static int livingCnt;
        const int id;
    public:
    C();
    ~C();
    void getId() const;
    void getLivingCnt() const;
    friend std::ostream &operator<<(std::ostream &out, const C &u);

};

C::C() : id(livingCnt + 1),valeur(id){livingCnt++;}
~C(){--livingCnt;}

