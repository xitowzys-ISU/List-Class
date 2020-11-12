//
//  LineListElem.hpp
//  listClass
//
//  Created by xitowzys on 05.11.2020.
//

#ifndef LineListElem_hpp
#define LineListElem_hpp

#include <stdio.h>

template<class T>
class LineListElem
{
private:
    T data;
    LineListElem* next = nullptr;
    
public:
    
    LineListElem(const T& data_next, LineListElem* next);
    ~LineListElem();

    const T& get_data() const;
    
    LineListElem* get_next() const;
    
    template<class X> friend class LineList;
};

#endif /* LineListElem_hpp */
