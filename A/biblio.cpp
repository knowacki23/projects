#include "biblio.h"

void Read (ifstream & inputFile, vector <string> & words){
	

		while (!inputFile.eof()){
				string word;
				inputFile >> word;
				words.push_back(word);
			}
}

void FindWordAndWrite (ofstream & outputFile, vector <string> & words, string wordToFind){

vector<string>::iterator it;
int counter=0;
int position=1;
string info;
ostringstream oss1, oss2;
oss2 << "Slowo '"<<wordToFind<<"' zostalo znalezione na pozycjach: ";
	for (vector<string>::iterator it = words.begin(); it != words.end(); it++){	  
		if(wordToFind == *it){
			counter++;
			oss1 << position << ". "<< *it<<"\n";
			oss2 << position <<", ";
		}
	position++;
	}
oss2<<"\nSlowo pojawilo sie " <<counter <<" razy.";

	info = oss1.str();
	info += oss2.str();
	cout<< info<<endl;
	outputFile<< info;	
	}
