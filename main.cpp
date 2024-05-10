#include <bits/stdc++.h>
#include <iostream>
#include "test.h"

template<typename T> concept ComplexConcept = requires(T v)
{
    { v.hash() }
    ->std::convertible_to<long>;
    { v.toString() }
    ->std::same_as<std::string>;
} && std::has_virtual_destructor<T>::value == false;


void PrintType(ComplexConcept auto &t)
{
    std::cout << t.toString() << '\n';
    std::cout << "t has no virtual destructor" << '\n';
}

int main()
{
//Class with virtual destructor
    Test1 a(55);
//    PrintType(a); //Error constraints not satisfied the expression «(std::has_virtual_destructor<_Tp>::value) == false [with T = Test1]» evaluated to «false»

//Class with wrong return value
    Test2 b(56);
//    PrintType(b); //Error «v.hash()» does not satisfy return-type-requirement; «v.toString()» does not satisfy return-type-requirement
    Test3 c(57);
//    PrintType(c); //Error the required expression «v.hash()» is invalid; the required expression «v.toString()» is invalid;

//Class with good concept requirements
    Test4 d(100);
    PrintType(d);
}