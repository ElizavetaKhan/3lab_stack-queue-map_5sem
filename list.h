#ifndef INC_1LAB_LIST_H
#define INC_1LAB_LIST_H
#include "Node2.h"
#include <cstring>

#include <iostream>
#include <fstream>

            // СПИСОК НА СВЯЗНОМ СПИСКЕ

struct resultIsUndefined : public std::exception {
    [[nodiscard]] const char* what() const noexcept override
    {
        std::cout << std::endl << std::endl;
        return "!! результат не определен !!";
    }
};


class list {
public:
    typedef Node1* position; // псевдоним для Node* position

private:
    position head;

private:
    position findPosition(position p); // возвращает элемент до p или же NULLPTR - если такой позиции нет

    position findLast(); // возвращает позицию последнего элемента списка

public:
    list();

    ~list(); // вызывает destruct

    void destruct(); // удаляет все new Node

    static void constructor(); // создание списка пустых

    void insert(Object& x, position p); // в список в position p вставить x

    position locate(Object& x); // возвращает position первого вхождения x в списке L

    Object* retrieve(position p); // возвращает объект в position p

    position next(position p); // получить position, следующую за p в списке L

    position previous(position p); // получить position, предыдущую position p в списке L

    position Delete(position p); // удаление элемента из списка L в position p

    void makeNull(); // делает список L пустым ( не содержащим элементов ) - вызов destruct

    position first(); // возвращает position первого элемента списка. Если список пустой, то возвращает end(L).

    static position end() ; // возвращает position после последнего

    void printList();

};


#endif //INC_1LAB_LIST_H
