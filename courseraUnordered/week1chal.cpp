int insert(int value, std::vector<int> &table) {
  // Code to insert value into a hashed location in table
  // where table is a vector of length 1000.
  // Returns the number of collisions encountered when
  // trying to insert value into table.
 
  int aux, i = 0;
  
  if (table[value % 1000] == -1) {
   table[value % 1000] = value;
   //std::cout << value%1000 << std::endl;
  }else{
    aux = value % 1000;
    while (table[aux] != -1){aux = (aux +1)%1000;i++;};
    table[aux]= value % 1000;
   //std::cout << "collision" << std::endl;
    
  }
  
  
//  }else{
//    aux = value % 1000;
//    while (table[aux] != -1){aux = (aux +1)%1000;};
//    table[aux]= value % 1000;
//  }
  
  return i;
}