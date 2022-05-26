#include "ArrayManip.h"

#define NUMBER_OF_ARRAYS 15

int main()
{
    ArrayManip Manipulator;

    srand(unsigned(time(0)));

    for (int i = 0; i < NUMBER_OF_ARRAYS; i++)
    {
        cout << "Array " << i << ": ";
        
        Manipulator.populateArray(Manipulator.getPopulatedArray(), Manipulator.getOccurrencesArray());
        Manipulator.sortMyArray(Manipulator.getPopulatedArray(), ARRAY_SIZE);
        Manipulator.printArray(Manipulator.getPopulatedArray(), ARRAY_SIZE);

        cout << "\n";
    }

    Manipulator.findAndSetMaxValue(Manipulator.getOccurrencesArray(), MAX_VALUE);

    Manipulator.fillMaxOccurrenceVector(Manipulator.getOccurrencesArray(), MAX_VALUE, Manipulator.getMaxValue());

    if (Manipulator.getMaxOccurrencesVector().size() >= 2)
    {
        cout << "Two or more values were tied for max: [";
        for(int i : Manipulator.getMaxOccurrencesVector())
        {
            cout << i << ",";
        }
        cout << "]\n";
        cout << "Number of times these appeared: " << Manipulator.getMaxValue();
    }
    else
    {
        cout << "Number that appeared the most: " << Manipulator.getMaxOccurrencesVector()[0];
        cout << "\nNumber of appearances: " << Manipulator.getMaxValue();
    }
    
    cout << "\nOccurences per number where value is located at i-1: ";
    Manipulator.printArray(Manipulator.getOccurrencesArray(), MAX_VALUE);

    return 0;
}