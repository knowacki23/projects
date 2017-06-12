#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <limits>
#define wordSize 101
#define TEXT1(x) {cout<< "Tablica przed sortowaniem:"<< endl;\
					for(int a=0; a<(x.size()); a++)\
					cout<< (x)[a]<< " ";}
#define TEXT2(x,y) {cout<<"\n\n\nPo sortowaniu "<<(x)<<":"<<endl;\
					for(int a=0; a<(y).size(); a++)\
					cout<< (y)[a]<< " ";}


using namespace std;

void Read (ifstream & inputFile, vector <string> & words);
void SelectionSort(vector<string> &vec);
void Merge_v(vector<string> &v_merge, int left, int q, int right);
void MergeSort(vector<string> &v_merge, int left, int right);
void InsertSort(vector<string> &vec);

