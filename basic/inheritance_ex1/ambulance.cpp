#include "ambulance.h"
#include <iostream>

using namespace std;

// constructor
CAmbulance::CAmbulance() : m_number(119)
{
    cout << "Generate CAmbulance object" << endl;
}
// destructor
CAmbulance::~CAmbulance()
{
    cout << "Discard CAmbulance object" << endl;
}
void CAmbulance::savePeople(){
    cout << "rescue oparation" << endl << "Call number " << m_number << endl;
}

