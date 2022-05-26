#pragma once
#ifndef ARRAY_MANIP_H
#define ARRAY_MANIP_H

#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;

#define ARRAY_SIZE 400
#define MAX_VALUE 25

class ArrayManip
{
    private:
        int populatedArray[ARRAY_SIZE];
        int occurrencesArray[MAX_VALUE];
        vector<int> maxOccurrenceValuesVector;
        int maxValue;

    public:
        ArrayManip();

        void populateArray(int *ar, int *ocAr);
        void sortMyArray(int *ar, int size);
        void swap(int *ar, int index1, int index2);
        void printArray(int *ar, int size);
        void incrementOccurrence(int *ocAr, int index);
        void findAndSetMaxValue(int *ocAr, int size);
        void fillMaxOccurrenceVector(int *ocAr, int ocArSize, int maxValue);

        int *getPopulatedArray();
        int *getOccurrencesArray();
        vector<int> getMaxOccurrencesVector();
        
        void setMaxValue(int newMax);
        int getMaxValue();
};

#endif // ! ARRAY_MANIP_H
