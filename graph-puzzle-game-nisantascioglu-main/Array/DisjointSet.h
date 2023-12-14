//
// Created by nt024762 on 12/14/2023.
//






#include "Set.h"

class DisjointSet {
private:
    Set* sets;
    int count;
public:
    DisjointSet(int* elements, int count);
    DisjointSet(int count);
    ~DisjointSet();
    int findSetRecursive(int index);
    int findSetIterative(int index);
    void unionOfSets(int index1, int index2);
};



