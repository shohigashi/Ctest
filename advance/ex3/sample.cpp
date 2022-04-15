#include "sample.hpp"

CSample::CSample(){
  m_str = "";
}

void CSample::setStr(const string str){
  m_str = str;
  // str = "";
}

string CSample::getStr() const{
  return m_str;
  // m_str = "";
}
