/* Created by Nguyen Duc Dung on 2019-09-03.
 * =========================================================================================
 * Name        : dbLib.h
 * Author      : Duc Dung Nguyen
 * Email       : nddung@hcmut.edu.vn
 * Copyright   : Faculty of Computer Science and Engineering - HCMUT
 * Description : The data structure library for Assignment 1
 * Course      : Data Structure and Algorithms - Fall 2019
 * =========================================================================================
 */

#ifndef DSA191_A1_DBLIB_H
#define DSA191_A1_DBLIB_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <sstream>
#include <math.h>

#include "dsaLib.h"


/* TODO: Please design your data structure carefully so that you can work with the given dataset
 *       in this assignment. The below structures are just some suggestions.
 */
struct TCity: public mListItem {
    // The structure to store city information
    int id;
    string name;
    string coords;
    int start_year;
    string url_name;
    string country;
    string country_state;
    
public:
    void printThis(){
        cout << name;
    }
    
    
//    TCity(int a, string b, string c, int d, string e, string f, string g): id(a), name(b), coords(c), start_year(d), url_name(e), country(f), country_state(g) {}
};

class MLC {
public:
    virtual void p() = 0;
};

class ABC: public MLC {
public:
    virtual void p(){
        cout << "aab";
    }
};


struct TLine {
    // The structure to store line information
};

struct TTrack {
    // The structure to store track information
};

class TDataset {
    // This class can be a container that help you manage your tables
};

// Please add more or modify as needed

void LoadData(void *&);
void ReleaseData(void *&);

// My datas
extern L1List<TCity>* cityList;

#endif //DSA191_A1_DBLIB_H
