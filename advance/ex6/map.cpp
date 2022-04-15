#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map <string, int> score;
  string names[] = {"Tom", "Bob", "Mike"};
  score[names[0]] = 100;
  score[names[1]] = 80;
  score[names[2]] = 120;

  map <string, float> score2{
    {"Tom",200},{"Bob",160},{"Mike",240}
  };

  for (int i = 0; i< 3; ++i){
    cout << names[i] << ":" << score[names[i]] << endl;
  }
  for (auto i = score2.cbegin(); i != score2.cend(); ++i){
    cout << i->first << " " << i->second << endl;
  }
  return 0;
}

