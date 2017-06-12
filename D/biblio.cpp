#include "biblio.h"

using namespace std;

PrioQueue::PrioQueue(int size){
	vecPrioQueue.reserve(size);
}

PrioQueue::~PrioQueue(){
	vecPrioQueue.clear();	
}

int PrioQueue::empty(){
	if (vecPrioQueue.empty()){
		cout<<"Pusta!";
		return 1;
	}
	else return 0;
}

void PrioQueue::addElement(string element){
	vecPrioQueue.push_back(element);
}

string PrioQueue::getMax(){
	int max = 0;
	int size=vecPrioQueue.size()-1;
	for(int i=0; i<=size; i++){
		if(vecPrioQueue[i]>vecPrioQueue[max])
			max=i;
	};
	swap(vecPrioQueue[max],vecPrioQueue[size]);
	string el=vecPrioQueue[size];
	vecPrioQueue.pop_back();
	return el;
}

void PrioQueue::Print(){
	for(int i=0; i<vecPrioQueue.size(); i++){
		cout<<vecPrioQueue[i]<< "\t";	
	}
	cout<<endl;
}

/*********************************** PQ_Heap***********************************/

PQ_Heap::PQ_Heap(int size){
	vecHeap.reserve(size);
}
	
PQ_Heap::~PQ_Heap(){
	vecHeap.clear();
}

int PQ_Heap::parent(int i){
	return ((i+1)/2)-1;
}

void PQ_Heap::addElement(string element){
	vecHeap.push_back(element);	
	fixUP(vecHeap.size()-1);
}

void PQ_Heap::fixUP(int fix){
 	int i = fix;
 	while( i>0 && vecHeap[parent(i)] < vecHeap[i] ){
 		swap(vecHeap[i], vecHeap[parent(i)]);
 		i=parent(i);
	}		
}

string PQ_Heap::getMAX(){
	int size=vecHeap.size()-1;	
	swap(vecHeap[0],vecHeap[size]);
	string el=vecHeap[size];
	vecHeap.pop_back();
	fixDOWN(0);
	return el;	
}

void PQ_Heap::fixDOWN(int fix){
	int size=vecHeap.size()-1;
	while(left(fix)<=size){
		int j=left(fix);	
		if (vecHeap[left(fix)]>vecHeap[right(fix)])
			j=right(fix);
			if(vecHeap[j]>vecHeap[fix])
				swap(vecHeap[j], vecHeap[fix]);
				fix=j;
	}
}

int PQ_Heap::left(int i){
	return 2*i+1;
}
int PQ_Heap::right(int i){
	return 2*i+2;
}

void PQ_Heap::Print(){
	int size=0;
	int height = log2(vecHeap.size());
	int word=0;
	cout <<endl;
	for (int row=0; row <= height; row++)
	{
		for(int gap=0; gap <= (height - word); gap++)		
			cout<<setw(9)<<"";
		for(int row = 0; row < pow(2, word); row++){
			if(size < vecHeap.size()){
				cout <<vecHeap[size++];
				for(int gap=0; gap<=(height-word);gap++)
			cout<<setw(8)<<"";
			}
				else break;
			}
		cout<<endl;
	word++;		
	}
}
