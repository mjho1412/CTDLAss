/* Created by Nguyen Duc Dung on 2019-09-03.
 * =========================================================================================
 * Name        : processData.cpp
 * Author      : Duc Dung Nguyen
 * Email       : nddung@hcmut.edu.vn
 * Copyright   : Faculty of Computer Science and Engineering - HCMUT
 * Description : Implementation of main features in the assignment
 * Course      : Data Structure and Algorithms - Fall 2019
 * =========================================================================================
 */

#include "processData.h"
#include "dbLib.h"
#include "regex"
#include "dbLib.h"

/* TODO: You can implement methods, functions that support your data structures here.
 * */
using namespace std;

void* mData;
//void* &pOutput;

enum command_code{
    lineCount,
    lineCountCity,
    listStationCity,
    listLineCity,
    findCity,
    findStation,
    findStationTrack,
    insertStation,
    removeStation,
    updateStation,
    insertStationLine,
    removeStationLine,
    none
};

void Initialization() {
    // If you use global variables, please initialize them explicitly in this function.
}

void Finalization() {
    // Release your data before exiting
}

command_code separateByExpression(const char* command){
    if(regex_match(command, regex("CL"))) return lineCount;
    if(regex_match(command, regex("CL .+"))) return lineCountCity;
    if(regex_match(command, regex("LSC .+"))) return listStationCity;
    if(regex_match(command, regex("LLC .+"))) return listLineCity;
    if(regex_match(command, regex("LSL [0-9]+"))) return findCity;
    if(regex_match(command, regex("FC .+"))) return findStation;
    if(regex_match(command, regex("SLP [0-9]+ [0-9]+"))) return findStationTrack;
    if(regex_match(command, regex("IS .+"))) return insertStation;
    if(regex_match(command, regex("RS [0-9]+"))) return removeStation;
    if(regex_match(command, regex("US [0-9]+ .+"))) return updateStation;
    if(regex_match(command, regex("ISL [0-9]+ [0-9]+ [0-9]+"))) return insertStation;
    if(regex_match(command, regex("CL [0-9]+ [0-9]+"))) return removeStation;
    return none;
}

void countLineNum(){
//    L1List<TCity>* abc = static_cast<L1List<TCity>*>(malloc(sizeof(mData)));
//    L1Item<TCity>* bc = abc.moveTo(1);
//    TCity* test = bc.data;
    
//    TCity c = TCity{12, "b", "DSFsdf", 23, "Dsfsdf", "YTUYT", "fdgdfg"};
//    abc -> push_back(c);
//    abc -> moveTo(1) -> data.printCity();
    cityList -> printList();
}

void countLineNumByCity(const char* pRequest){
    
}

void getStationListByCity(const char* pRequest){
    
}

void getLineListByCity(const char* pRequest){
    
}

void getStationListByLine(const char* pRequest){
    
}

void findCityByName(const char* pRequest){
    
}

void findStationByName(const char* pRequest){
    
}

void findStationPositionInTrack(const char* pRequest){
    
}

void insertStationIntoDataSet(const char* pRequest){
    
}

void removeStationById(const char* pRequest){
    
}

void updateStationByIdInDataSet(const char* pRequest){
    
}

void insertStationToLineAtPosition(const char* pRequest){
    
}

void removeStationInLineAtPosition(const char* pRequest){
    
}

void ProcessRequest(const char* pRequest, void* pData, void* &pOutput, int &N) {
    // TODO: Implement this function for processing a request
    // NOTE: You can add other functions to support this main process.
    //       pData is a pointer to a data structure that manages the dataset
    //       pOutput is a pointer reference. It is set to nullptr and student must allocate data for it in order to save the required output
    //       N is the size of output, must be a non-negative number
    mData = pData;
    cout << "CLM " << separateByExpression(pRequest);
    
    switch(separateByExpression(pRequest)){
        case lineCount:
            countLineNum();
            break;
        case lineCountCity:
            countLineNumByCity(pRequest);
            break;
        case listStationCity:
            getStationListByCity(pRequest);
            break;
        case listLineCity:
            getLineListByCity(pRequest);
            break;
        case findCity:
            findCityByName(pRequest);
            break;
        case findStation:
            findStationByName(pRequest);
            break;
        case findStationTrack:
            findStationPositionInTrack(pRequest);
            break;
        case insertStation:
            insertStationIntoDataSet(pRequest);
            break;
        case removeStation:
            removeStationById(pRequest);
            break;
        case updateStation:
            updateStationByIdInDataSet(pRequest);
            break;
        case insertStationLine:
            insertStationToLineAtPosition(pRequest);
            break;
        case removeStationLine:
            removeStationInLineAtPosition(pRequest);
            break;
        case none:
            break;
        default:
            break;
    }
}





