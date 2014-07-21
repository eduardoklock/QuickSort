#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>
#include <ctime>

#include "quicksort.h"

using std::fstream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
    vector<int> elements;

    fstream file;

    file.open("arquivo.dat");

    int added;
    while(file >> added){
        elements.push_back(added);
    }

    int zoeira[elements.size()];

    for(int i = 0; i < elements.size(); i++){
        zoeira[i] = elements[i];
    }

    std::chrono::time_point<std::chrono::system_clock> start, end;

    start = std::chrono::system_clock::now();
    quickSort(zoeira, 0, elements.size());
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;

    cout << "result: " << endl;

    for(int i = 0; i < elements.size(); i++){
        cout << zoeira[i] << endl;
    }

    cout << "time: " << elapsed_seconds.count() << " seconds" << endl;

    return 0;
}