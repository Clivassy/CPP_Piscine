#include <iostream> 

using namespace std;

class Contact { 
  int x; 
public: 
  void setX(int i) { x = i; } 
  int getX() { return x; } 
  Contact(void); 

}; 

Contact::Contact(void)
{
    cout << "Constructor called" << endl;
    return;
}

int main() 
{ 
  Contact newContact[8]; 
  int i; 
 
  for(i=0; i < 8; i++) 
    newContact[i].setX(i); 
 
  for(i=0; i < 8; i++) 
    cout << "new_contact[" << i << "].getX(): " << newContact[i].getX() << "\n"; 
}