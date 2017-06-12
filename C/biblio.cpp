#include "biblio.h"

void Read (ifstream & inputFile, vector <string> & words)
{
	while (words.size() < wordSize)  // w wektorze znajduje siê words.size() s³ów
	{
				string word;
				inputFile >> word;
				words.push_back(word);
			}
			inputFile.seekg(0, inputFile.beg);
}

void InsertSort(vector<string> &vec)
{
	
	for(int j=1; j<vec.size(); j++)// elementy vec[0]...vec[j-1] s¹ uporz¹dkowane
	{
		string key = vec[j]; 
		int i = j-1;
		
		while(i>=0 && vec[i]>key) // elementy vec[i+1] wiêksze od klucza
		{
			vec[i+1] = vec[i]; 
			i= i-1;
		}
		vec[i+1] = key; 
	}
}

void SelectionSort(vector<string> &vec)
{
	
	int n = vec.size();
	for (int j=0; j<n; j++) //j najmmniejszych elementów jest na swoich miejscach 
	{
		int smallest = j; 
		for (int i=j+1; i<n; i++){
			if(vec[i]<vec[smallest]) //A[smallest] jest najmniejszym elementem spoœród vec[0] do vec[i]
			smallest = i;} 
	swap(vec[j],vec[smallest]);			
	}
}


void Merge_v(vector<string>& v_merge, int left, int q, int right)
{
	
	int n1 = q-left+1;
	int n2 = right -q;
	
	vector<string> vecL;
	vector<string> vecR;
	
		for(int i=0; i<n1; i++)//i elementów zosta³o przypisanych do tablicy
		{
			
			vecL.push_back(v_merge[left+i]);
		}
			
		for(int j=0; j<n2; j++)//j elementów zosta³o przypisanych do tablicy
		{
			vecR.push_back(v_merge[q+j+1]);
		}
		
		vecL.push_back("~");
		vecR.push_back("~");
	
	int i=0, j=0;
		for(int k=left; k<=right; k++) //vec[1..k] to scalone podci¹gi vecP[1..j-1], vecL[1..i-1]
		{
			if(vecL[i]<=vecR[j])
			{
				v_merge[k]=vecL[i];
				i=i+1;	
			}
			
			else
			{
				v_merge[k]=vecR[j];
				j=j+1;		
			}
			
		}
	}

void MergeSort(vector<string> &v_merge,int left, int right)
{
	
	if(left<right)
	{
		int q=((left+right)/2); 
		MergeSort(v_merge, left, q); 
		MergeSort(v_merge, q+1, right);
		Merge_v(v_merge, left, q, right); 

	}
}


