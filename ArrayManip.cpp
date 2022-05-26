#include "ArrayManip.h"

ArrayManip::ArrayManip()
{
    fill_n(populatedArray, ARRAY_SIZE, -1);
    fill_n(occurrencesArray, MAX_VALUE, 0);
    maxValue = -1;
}

void ArrayManip::populateArray(int *ar, int *ocAr)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        ar[i] = rand() % MAX_VALUE + 1;
        incrementOccurrence(ocAr, ar[i]);
    }
}

void ArrayManip::sortMyArray(int *ar, int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (i + 1 < size)
            {
                if (ar[i] > ar[i + 1])
                {
                    swap(ar, i, i + 1);
                }
            }
        }
    }
}

void ArrayManip::swap(int *ar, int index1, int index2)
{
    int temp = ar[index1];
    ar[index1] = ar[index2];
    ar[index2] = temp;
}

void ArrayManip::printArray(int *ar, int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << ar[i];
        }
        else
        {
            cout << ar[i] << ",";
        }
    }
    cout << "]" << endl;
}

void ArrayManip::incrementOccurrence(int *ocAr, int index)
{
    ocAr[index - 1]++;
}

void ArrayManip::findAndSetMaxValue(int *ocAr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size)
        {
            if (ocAr[i] > maxValue)
            {
                setMaxValue(ocAr[i]);
            }
        }
    }
}

void ArrayManip::fillMaxOccurrenceVector(int *ocAr, int ocArSize, int maxValue)
{
    int index = 0;
    for (int i = 0; i < ocArSize; i++)
    {
        if (ocAr[i] == maxValue)
        {
            this->maxOccurrenceValuesVector.push_back(i + 1);
        }
    }
}

void ArrayManip::setMaxValue(int newMax)
{
    maxValue = newMax;
}

int ArrayManip::getMaxValue()
{
    return maxValue;
}

int *ArrayManip::getPopulatedArray()
{
    return populatedArray;
}

int *ArrayManip::getOccurrencesArray()
{
    return occurrencesArray;
}

vector<int> ArrayManip::getMaxOccurrencesVector()
{
    return maxOccurrenceValuesVector;
}
