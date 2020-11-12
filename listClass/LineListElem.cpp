//
//  LineListElem.cpp
//  listClass
//
//  Created by xitowzys on 05.11.2020.
//

#include "LineListElem.hpp"

template <class T>
LineListElem<T>::LineListElem(const T& data_next, LineListElem<T>* next){
    this->data = data_next;
    this->next = next;
}

template <class T>
LineListElem<T>* LineListElem<T>::get_next() const {
    return this->next;
}

template <class T>
const T& LineListElem<T>::get_data() const {
    return this->data;
}

template<class T>
LineListElem<T>::~LineListElem() {}
