#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>	
#include <string>
#include <vector>
#include <sstream>

using namespace std;
void Read (ifstream & inputFile, vector <string> & words);
void FindWordAndWrite (ofstream & outputFile, vector <string> & words, string wordToFind);
