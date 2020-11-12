//
//  main.cpp
//  listClass
//
//  Created by xitowzys on 30.10.2020.
//

#include <iostream>
#include "LineList.hpp"
#include "LineList.cpp"
#include "LineListElem.hpp"
#include "LineListElem.cpp"

int main(int argc, const char * argv[]) {
//    int n, m; //
//    std::cin>>n;

    LineList<int> list;
    for (int i = 1000; i >= 1; i--)
        list.insert_first(i);
    
    std::cout << list << std::endl;
    list.delete_first();
    std::cout << list << std::endl;
    list.delete_after(list.get_start()->get_next()->get_next());
    std::cout << list << std::endl;

    
    return 0;
}
