#include "MutantStack.hpp"
#include <iostream>
#include <list>

// int main()
// {
// std::cout << "- Subject main -" << std::endl;
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// }
// std::cout << "- Replacing Mutant by list -" << std::endl;
// {
// std::list<int> mlist;
// mlist.push_back(5);
// mlist.push_back(17);
// std::cout << mlist.back() << std::endl;
// mlist.pop_back();
// std::cout << mlist.size() << std::endl;
// mlist.push_back(3);
// mlist.push_back(5);
// mlist.push_back(737);
// //[...]
// mlist.push_back(0);
// std::list<int>::iterator it = mlist.begin();
// std::list<int>::iterator ite = mlist.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::list<int> s(mlist);
// return 0;
// }
// }


int main()
{
std::cout << "- Subject main -" << std::endl;
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::cout << "Test ALL Iterators" << std::endl;
std::cout << "Test on const_iterators" << std::endl;
MutantStack<int>::const_iterator cit = mstack.begin();
MutantStack<int>::const_iterator cite = mstack.end();
++cit;
--cit;
while (cit != cite)
{
std::cout << *cit << std::endl;
++cit;
}
std::cout << "Test on reverse_iterators" << std::endl;
MutantStack<int>::reverse_iterator rit = mstack.rbegin();
MutantStack<int>::reverse_iterator rite = mstack.rend();
++rit;
--rit;
while (rit != rite)
{
std::cout << *rit << std::endl;
++rit;
}
std::cout << "Test on const_reverse_iterators" << std::endl;
MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
MutantStack<int>::const_reverse_iterator crite = mstack.rend();
++crit;
--crit;
while (crit != crite)
{
std::cout << *crit << std::endl;
++crit;
}
std::stack<int> s(mstack);
}
std::cout << "- Replacing Mutant by list -" << std::endl;
{
std::list<int> mlist;
mlist.push_back(5);
mlist.push_back(17);
std::cout << mlist.back() << std::endl;
mlist.pop_back();
std::cout << mlist.size() << std::endl;
mlist.push_back(3);
mlist.push_back(5);
mlist.push_back(737);
//[...]
mlist.push_back(0);
std::list<int>::iterator it = mlist.begin();
std::list<int>::iterator ite = mlist.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::list<int> s(mlist);
return 0;
}
}