#include "biblio.h"

void Read (ifstream &inputFile, vector<vector<string> > &lines){
	string line;

	while (inputFile.eof() == 0){
		getline(inputFile, line);
		vector<string> words;
		string word;
		istringstream iss(line);
		while(iss>>word)
			words.push_back(word);
			lines.push_back(words);
	}
}

void Write( ofstream &outputFile, vector<vector<string> > &tmp){
	for (int i=0; i < tmp.size(); i++){
		for(int j=0; j<tmp[i].size(); j++){
 			outputFile<<left<<setw(14)<< tmp[i][j]<<" ";
			}
		outputFile<<endl;	
	}
}

void Delete(ofstream &deleteEmpty, vector<vector<string> > &lines){
	int position=0;
	cout << "Ilosc linii przed sprzataniem: " << lines.size() << endl;
	for (vector<vector<string> >::iterator it = lines.begin(); it != lines.end(); it++){
		if(it->size()==0)
		{	
		lines.erase(it);
		}
	position++;
	}
	cout << "Ilosc linii po sprzataniu: " << lines.size() << endl;
	Write(deleteEmpty, lines);
}

void SortByFirstColumn(ofstream &sort_FirstColumn, vector<vector<string> > &lines){
	vector<vector<string> > tmp(lines);
	sort(tmp.begin(), tmp.end());
	Write(sort_FirstColumn, tmp);
	cout<<"Pomyslnie posortowano kolumny wzgledem pierwszej.\n";
}

void SortRow(ofstream &sort_Row, vector<vector<string> > &lines){
	vector<vector<string> > tmp(lines);
	for(int i=0; i< tmp.size(); i++){
		sort(tmp[i].begin(), tmp[i].end());
	}
	Write(sort_Row, tmp);
	cout<<"Pomyslnie posortowano kazdy wiersz.\n";
}

void SortByLastColumn(ofstream &sort_LastColumn, vector<vector<string> > &lines){
	vector<vector<string> > tmp(lines);
	for(int i=0; i< tmp.size(); i++){
		reverse(tmp[i].begin(), tmp[i].end());
	}
	sort(tmp.begin(), tmp.end());
	for(int i=0; i< tmp.size(); i++){
		reverse(tmp[i].begin(), tmp[i].end());
	}
	Write(sort_LastColumn, tmp);
	cout<<"Pomyslnie posortowano kolumny wzgledem ostatniej.\n";
}

int Min(ofstream &min_max, vector<vector<string> > &lines){
	int min;
	min = lines[0].size();
	for (int i=1; i<lines.size(); i++){	
		if(lines[i].size() < min){
			min = lines[i].size();
		}	
	}
	min_max<<"Najkrotsza linia ma dlugosc: "<<min<<endl;
	cout<<"Najkrotsza linia ma dlugosc: "<<min<<endl;
return min;
}

int Max(ofstream &min_max, vector<vector<string> > &lines){
	int max;
	max = lines[0].size();
	for (int i=1; i<lines.size(); i++){	
		if(lines[i].size() > max){
			max = lines[i].size();
		}
	}
	min_max<<"Najdluzsza linia ma dlugosc: "<<max<<endl;
	cout<<"Najdluzsza linia ma dlugosc: "<<max<<endl;
return max;
}
