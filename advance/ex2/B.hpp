#ifndef _B_H_
#define _B_H_

class A; //refer class A

class B{
  private:
    A* m_pA;
  public:
    B(A* pA); //constructor
    void hoge();
};

#endif //_B_H_
