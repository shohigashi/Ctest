#ifndef _RAT_H_
#define _RAT_H_

class Crat{
    public:
        // constructor
        Crat();
        // destructor
        ~Crat();
        // output the number of mouse
        static void showNum();
        // mouse squeaks
        void squeak();
    private:
        // id of mouse
        int m_id;
        // number of mouse
        static int m_count;
};

#endif // _RAT_H_
