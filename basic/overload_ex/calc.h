#ifndef _CALC_H_
#define _CALC_H_

class CCalc{
    private:
        int m_a, m_b;
    public:
        // default constractor
        CCalc();
        // constractor with argument
        CCalc(int a, int b);
        // addition
        int add();
        // addition with argument
        int add(int a, int b);
        // set value
        void setValue(int a, int b);
        // get value m_a
        int getA();
        // get value m_b
        int getB();
};

#endif // _CALC_H_
