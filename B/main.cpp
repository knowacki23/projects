#include "biblio.h"

int main() {
	vector<vector<string> > lines;

	ifstream inputFile ("tekst.txt");
	
	if (inputFile.is_open()){
		cout << "plik dostepny\n";
		ofstream deleteEmpty ("delete_empty.txt");
		ofstream sort_FirstColumn("sort_by_first_column.txt");
		ofstream sort_Row("sort_in_row.txt");
		ofstream sort_LastColumn("sort_by_last_column.txt");	
		ofstream min_max("min_max.txt");
						
			Read(inputFile, lines);
			Delete(deleteEmpty, lines);
			Min(min_max, lines);
			Max(min_max, lines);
			SortByFirstColumn(sort_FirstColumn, lines);
			SortRow(sort_Row, lines);
			SortByLastColumn(sort_LastColumn, lines);			
		
		inputFile.close();
		deleteEmpty.close();
		sort_FirstColumn.close();
		sort_Row.close();
		sort_LastColumn.close();
		min_max.close();
	}
	else{
		cout << "koniec - plik niedostepny\n";
		return-1;
	}
return 0;
}
