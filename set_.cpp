#include <iostream>       // std::cout
#include <set>          // std::set
using namespace std;
   
// empty set
int main ()
{
    // create empty set
    set<int> my_empty_set;
   
    // add single elements
    my_empty_set.insert(10);
    my_empty_set.insert(100);
    my_empty_set.insert(1000);
    my_empty_set.insert(10000);
   
    // create copy of a set
    set<int> my_set_of_tens (my_empty_set);
     
    // delete single elements
    my_set_of_tens.erase(10);
   
    // delete elements using pointers
    my_set_of_tens.erase(my_set_of_tens.find(1000), my_set_of_tens.end());
   
      // print elements
    set<int>::iterator it;
    for (it=my_set_of_tens.begin(); it!=my_set_of_tens.end(); ++it)
      cout << ' ' << *it;
    cout << '\n';
   
    // clear set using pointers
    my_set_of_tens.erase(my_set_of_tens.begin(), my_set_of_tens.end());
   
    // clear set using clear
    my_set_of_tens.clear();
}
