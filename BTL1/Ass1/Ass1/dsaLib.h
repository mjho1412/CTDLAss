/* Created by Nguyen Duc Dung on 2019-09-03.
 * =========================================================================================
 * Name        : dsaLib.h
 * Author      : Duc Dung Nguyen
 * Email       : nddung@hcmut.edu.vn
 * Copyright   : Faculty of Computer Science and Engineering - HCMUT
 * Description : The data structure library for Assignment 1
 * Course      : Data Structure and Algorithms - Fall 2019
 * =========================================================================================
 */

#ifndef DSA191_A1_DSALIB_H
#define DSA191_A1_DSALIB_H
#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

class DSAException {
    int     _error;
    string  _text;
public:

    DSAException() : _error(0), _text("Success") {}
    DSAException(int err) : _error(err), _text("Unknown Error") {}
    DSAException(int err, const char* text) : _error(err), _text(text) {}

    int getError() { return _error; }
    string& getErrorText() { return _text; }
};

struct mListItem {
public:
    virtual void printThis() = 0;
};

template <class T>
struct L1Item {
    T data;
    L1Item<T> *pNext;
    L1Item() : pNext(NULL) {}
    L1Item(T &a) : data(a), pNext(NULL) {}
    
public:
    void printData(){
//        cout << "Here's yo data";
        mListItem* a = &data;
        a -> printThis();
    }
};

template <class T>
class L1List {
    L1Item<T>   *_pHead;// The head pointer of linked list
    size_t      _size;// number of elements in this list
public:
    L1List() : _pHead(NULL), _size(0) {}
    ~L1List();

    void    clean();
    bool    isEmpty() {
        return _pHead == NULL;
    }
    size_t  getSize() {
        return _size;
    }

    T&      at(int i);// give the reference to the element i-th in the list
    T&      operator[](int i);// give the reference to the element i-th in the list

    bool    find(T& a, int& idx);// find an element similar to a in the list. Set the found index to idx, set idx to -1 if failed. Return true if success.
    int     insert(int i, T& a);// insert an element into the list at location i. Return 0 if success, -1 otherwise
    int     remove(int i);// remove an element at position i in the list. Return 0 if success, -1 otherwise.

    int     push_back(T& a);// insert to the end of the list
    int     insertHead(T& a);// insert to the beginning of the list

    int     removeHead();// remove the beginning element of the list
    int     removeLast();// remove the last element of the list

    void    reverse();

    void    traverse(void (*op)(T&)) {
        // TODO: Your code goes here
    }
    void    traverse(void (*op)(T&, void*), void* pParam) {
        // TODO: Your code goes here
    }
    void    printList(){
        L1Item<T>* temp= new L1Item<T>;
        temp = _pHead;
        while(temp != nullptr){
            temp -> printData();
            temp = temp -> pNext;
        }
    }
    
//    L1Item<T>*  getPos(int pos){
//        L1Item<T>* cur = moveTo(pos);
//        return cur;
//    }
    
    L1Item<T>*  getHead(){
        L1Item<T>* cur = _pHead;
        return cur;
    }
    
    L1Item<T>*  getTail(){
        L1Item<T>* cur = _pHead;
        if(cur != NULL){
            while(true){
                if(cur -> pNext != NULL){
                    cur = cur -> pNext;
                } else break;
            }
        }
        return cur;
    }
    
    L1Item<T>*  moveTo(int pos) {
        L1Item<T>* cur = _pHead;
        int count = pos;
        if(cur != NULL){
            while(count > 0){
                if(cur -> pNext != NULL){
                    cur = cur -> pNext;
                    count --;
                } else break;
            }
        }
        return cur;
    }
};


template <class T>
int L1List<T>::insert(int i, T& a) {
    // TODO: Your code goes here
    return 0;
}

template <class T>
int L1List<T>::remove(int i) {
    // TODO: Your code goes here
    return 0;
}

/// Insert item to the end of the list
/// Return 0 if success, -1 otherwise
template <class T>
int L1List<T>::push_back(T &a) {
    
    
//    if(temp != NULL){
//        L1Item<T>* newNode = new L1Item<T>;
//        newNode -> data = a;
//        temp -> pNext = newNode;
//    } else {
//        L1Item<T>* newNode = new L1Item<T>;
//        temp = newNode;
//    }
    
    L1Item<T>* temp = new L1Item<T>;
    L1Item<T>* tail = getTail();
    temp->data=a;
    temp->pNext = NULL;
    if(_pHead==NULL)
    {
      _pHead=temp;
      temp=NULL;
    }
    else
    {
      tail.
      tail=temp;
    }
    return 0;
}

/// Insert item to the front of the list
/// Return 0 if success, -1 otherwise
template <class T>
int L1List<T>::insertHead(T &a) {
    // TODO: Your code goes here
    return 0;
}

/// Remove the first item of the list
/// Return 0 if success, -1 otherwise
template <class T>
int L1List<T>::removeHead() {
    // TODO: Your code goes here
    return -1;
}

/// Remove the last item of the list
/// Return 0 if success, -1 otherwise
template <class T>
int L1List<T>::removeLast() {
    // TODO: Your code goes here
    return -1;
}

#endif //DSA191_A1_DSALIB_H
