//
//  LineList.cpp
//  listClass
//
//  Created by xitowzys on 05.11.2020.
//

#include "LineList.hpp"

template <class T>
LineList <T>::LineList() {
    this->start = 0;
}

template <class T>
LineList <T>::~LineList<T>() {
    while (start)
        this->delete_first();
}

template <class T>
void LineList<T>::insert_first(const T& data) {
    LineListElem <T>* second = start;
    start = new LineListElem<T>(data, second);
    list_size++;

}

template <class T>
void LineList<T>::delete_after(LineListElem<T> *ptr) {
    if (ptr && ptr->next) {
        LineListElem<T>* temp = ptr -> next;
        ptr->next = ptr->next->next;
        delete temp;
        list_size--;
    } else throw LineListException();
}

template <class T>
void LineList<T>::insert_after(LineListElem<T> *ptr, const T &data) {
    if (ptr){
        LineListElem<T>* temp = ptr -> next;
        ptr->next = new LineListElem<T> (data, temp);
        list_size++;
    }
}

template <class T>
std::ostream& operator <<(std::ostream& out, LineList<T>& list){
    LineListElem<T>* ptr = list.get_start();
    if (!ptr) out << "Empty\n";
    else {
        
        int list_size = list.size();
        
        for (int i = 0; i < list_size && ptr; i++) {
            out << ptr->get_data() << ' ';
            ptr = ptr->get_next();
        }
    }

    return out;
}

template <class T>
void LineList<T>::delete_first() {
    if (start) {
        LineListElem<T>* temp = start -> next;
        delete start;
        start = temp;
        list_size--;
    } else {
        throw LineListException();
    }
}

template <class T>
LineListElem<T>* LineList<T>::get_start() {
    return start;
}

template<typename T>
int LineList<T>::size() const {
    return list_size;
    
}

