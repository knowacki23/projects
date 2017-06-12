#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

class PrioQueue{
	
	private:
		vector<string> vecPrioQueue;
		
	public:
		PrioQueue(int size);
		~PrioQueue();
		int empty();
		void addElement(string element);
		string getMax();
		void Print();
		
};

class PQ_Heap{
	
	private:
		vector<string> vecHeap;
		void fixUP(int fix);
		void fixDOWN(int fix);
		int parent(int i);
		int left(int i);
		int right(int i);
			
	public:
		PQ_Heap(int size);
		~PQ_Heap();
		void addElement(string);
		string getMAX();
		void Print();
		
};
