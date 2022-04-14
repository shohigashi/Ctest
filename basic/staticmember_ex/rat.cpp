#include "rat.h"
#include <iostream>

using namespace std;

// set initial number of mouse as 0
int Crat::m_count = 0;

// constructor
Crat::Crat(): m_id(0){
    m_id = m_count; // set the number of mouse as its id
    m_count ++ ; // add the number
}
// destructor
Crat::~Crat(){
    cout << "mouse:" << m_id << " delete" << endl;
    m_count--;
}
// output number of mouse
void Crat::showNum()
{
    cout << "Current number of mouse is " << m_count << endl;
}
// mouse squeaks
void Crat::squeak()
{
    cout << m_id << ":" << "'squak!'" << endl;
}

