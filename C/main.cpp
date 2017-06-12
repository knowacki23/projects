#include "biblio.h"


int main() {
	
vector<string> vectorInsertion;
vector<string> vectorSortBib;
vector<string> v_merge;
vector<string> vectorSelection;
vector<string> vector;

ifstream inputFile("tekst.txt");

Read(inputFile, vectorSelection);

	TEXT1(vectorSelection);

	SelectionSort(vectorSelection);
	
	TEXT2("selection",vectorSelection);



Read(inputFile, vectorInsertion);

	InsertSort(vectorInsertion);
	
	TEXT2("insertion", vectorInsertion);
	

Read(inputFile, vectorSortBib);

	sort(vectorSortBib.begin(), vectorSortBib.end());
	
	TEXT2("funkcja biblioteczna",vectorSortBib);


Read(inputFile, v_merge);

	MergeSort(v_merge, 0, wordSize-1);
	
	TEXT2("merge",v_merge);

	
return 0;
}


