#ifndef _A_H_
#define _A_H_

class B; // refer class B

class A{
    private:
      B* m_pB;
    public:
      A(); // constructor
      void foo();
      void bar();
};

#endif // _A_H_
