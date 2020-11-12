//
//  LineList.hpp
//  listClass
//
//  Created by xitowzys on 05.11.2020.
//

#ifndef LineList_hpp
#define LineList_hpp

#include <stdio.h>
#include <iostream>

#include "LineListElem.hpp"

class LineListException {};

template<class T>
class LineList
{
    LineList(const LineList&);
    LineList& operator=(const LineList&);
    int list_size;
    
protected:
    LineListElem<T>* start;
    
public:
    LineList();
    ~LineList();

    LineListElem<T>* get_start();
    int size() const;

    void delete_first();
    void delete_after(LineListElem<T>*);
    void insert_first(const T& data);
    void insert_after(LineListElem<T>*, const T&);

    template<class X> friend std::ostream& operator<<(std::ostream&, const LineList&);
    
    T operator[](int);
};

#endif /* LineList_hpp */
