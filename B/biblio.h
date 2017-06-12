#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Read (ifstream &inputFile, vector<vector<string> > &lines);
void Write( ofstream &outputFile, vector<vector<string> > &tmp);
void Delete(ofstream &deleteEmpty, vector<vector<string> > &lines);
void SortByFirstColumn(ofstream &sort_FirstColumn, vector<vector<string> > &lines);
void SortRow(ofstream &sort_Row, vector<vector<string> > &lines);
void SortByLastColumn(ofstream &sort_LastColumn, vector<vector<string> > &lines);
int Min(ofstream &min_max, vector<vector<string> > &lines);
int Max(ofstream &min_max, vector<vector<string> > &lines);
