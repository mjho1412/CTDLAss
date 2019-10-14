/* Created by Nguyen Duc Dung on 2019-09-03.
 * =========================================================================================
 * Name        : dbLib.cpp
 * Author      : Duc Dung Nguyen
 * Email       : nddung@hcmut.edu.vn
 * Copyright   : Faculty of Computer Science and Engineering - HCMUT
 * Description : The data structure library for Assignment 1
 * Course      : Data Structure and Algorithms - Fall 2019
 * =========================================================================================
 */

#include "dbLib.h"

/* TODO: You can implement methods, functions that support your data structures here.
 * */

L1List<TCity>* cityList;

void LoadData(void *& list){
    
//    cityList = new L1List<TCity>;
    cityList = new L1List<TCity>;
    list = cityList;
//    TCity a = TCity{12, "dsf", "DSFsdf", 23, "Dsfsdf", "YTUYT", "fdgdfg"};
//    TCity b = TCity{12, "a", "DSFsdf", 23, "Dsfsdf", "YTUYT", "fdgdfg"};
//    TCity c = TCity{12, "b", "DSFsdf", 23, "Dsfsdf", "YTUYT", "fdgdfg"};
    TCity a = TCity();
    a.name = "Mjho";
    cityList -> push_back(a);
    
    
//    cityList -> push_back(b);
//    cityList -> push_back(c);
    
}

void ReleaseData(void *&){
    
}
