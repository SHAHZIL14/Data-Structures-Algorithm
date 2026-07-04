VECTORS
->Data structure.
->Works like array.
->Dynamic in nature.

SYNTAX
vector<type>'name'; ->size 0;

ACCESS
'name'[index] -> Gives values at index 'index';

!! Must include #include <vector>!!

-> vector<'type'>'name'(n,m);-> Initialized vector of n size with m values at each index.

-> For each -> for(int i:'name'){
i->value not index!!!
}


METHODS
-> size : Return the size .
-> push_back : Inserts the value at the end of the vector.
-> pop_back : Removes the value from last index.
-> front : Returns value at index 0.
-> back : Returns value at last index.
-> at : Returns value at index 'index'.


*Capacity of the vector increases by double then the items exceeds the limit of size.
