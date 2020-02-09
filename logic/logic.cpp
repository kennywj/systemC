// All systemc modules should include systemc.h header file
#include "systemc.h"

// sc_main in top level function like in C++ main
int sc_main(int argc, char* argv[]) 
{ // Declare the sc_logic
  sc_logic       read_en;
  sc_logic       pad;
  sc_logic       enable;
  sc_bit           no_x_z;
  // Assign values
  pad = 'z';
  cout <<"Value of pad     : " << pad << endl;
  enable = '0';
  cout <<"Value of enable  : " << enable << endl;
  read_en = ~enable;
  cout <<"Value of read_en : " << read_en << endl;
  // Logic operation
  if (pad == '1') {
    cout <<"Pad is 1"<< endl;
  } else {
    cout <<"Pad is not 1"<< endl;
  }
  // Assign to sc_bit type
  no_x_z = enable; // Assign 0/1 value
  cout <<"Value of no_x_z  : " << no_x_z  << endl;
  no_x_z = pad; // Assign Z
  cout <<"Value of no_x_z  : " << no_x_z  << endl;
  // Assign with cast values
  pad = sc_logic ('x');
  cout <<"Value of pad     : " << pad << endl;

  return 1;
  return 1;
}
