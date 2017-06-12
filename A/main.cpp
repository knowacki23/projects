#include "biblio.h"

int main(){
	
	
	vector<string> words;
	ifstream inputFile ("tekst.txt");
	ofstream outputFile ("tekst2.txt");	
			if (inputFile.is_open()){
				cout << "plik dostepny\n";
			}
			else{
				cout << "koniec - plik niedostepny\n";
				return-1;
			}


		Read (inputFile, words);
		cout<<"Ilosc slow w pliku: "<<words.size()<<".";
							
		
	string wordToFind;
		cout<<"\nPodaj szukane slowo:";
		cin>> wordToFind;
	FindWordAndWrite(outputFile, words, wordToFind);


	inputFile.close();
	outputFile.close();
		
return 0;	
}

