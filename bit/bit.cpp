// All systemc modules should include systemc.h header file
#include "systemc.h"

// sc_main in top level function like in C++ main
int sc_main(int argc, char* argv[]) 
{ // Declare the sc_bit 
  bool             enable;
  bool             read_en;
  // Assign value to sc_bit
  enable = '1';
  cout <<"Value of enable  : " << enable << endl;
  //Assign sc_bit to another sc_bit
  read_en = enable;
  cout <<"Value of read_en : " << read_en << endl;

  return 1;
}
