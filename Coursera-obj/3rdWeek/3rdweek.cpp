/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */
 
 Pair::Pair(int a, int b){
   int * pax = new int(a);
   int * pbx = new int(b);
  pa = pax;
  pb = pbx;
 };
 
 Pair::Pair(const Pair& other){
   pa = other.pa;
   pb = other.pb;
 };

 Pair::~Pair(){
  
 }


 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}