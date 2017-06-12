#include "biblio.h"

int main()
{		
	int sizePQ = 10;
	PrioQueue write(sizePQ);
		cout << " \t\tKOLEJKA PRIORYTETOWA - test poprawnosci\t" <<endl;
		cout << "   " << endl;
		cout << endl <<"Kolejka priorytetowa:" << endl;
		write.addElement("kasia");
		write.addElement("basia");
		write.addElement("alina");
		write.addElement("grazyna");
		write.addElement("eliza");
		if (write.empty()){
			cout<<"Kolejka jest pusta.\t"<< endl;
		}
		else
		{
			cout<<"kolejka nie jest pusta.\t\t"<<endl;
		}
		cout << "   " << endl;
		write.Print();
		cout << "   " << endl;
		cout << "Kolejka po dodaniu slowa 'zofia': " << endl;
		write.addElement("zofia");
		write.Print();
		cout << "   " << endl;
		cout << endl << "Maksymalny element:\t\t " << write.getMax()<<endl;
		cout << "   " << endl;
		cout << endl <<"Kolejka po usunieciu maksymalnego elementu: " <<endl;
		cout << "   " << endl;
		write.Print();
		
	

	int sizeHeap = 10;
	PQ_Heap writeHeap(sizeHeap);
		cout << "   " << endl;
		cout << "\t\tKOLEJKA PRIORYTETOWA KOPCOWA - test poprawnosci" << endl;
		writeHeap.addElement("kasia");
		writeHeap.addElement("basia");
		writeHeap.addElement("alina");
		writeHeap.addElement("grazyna");
		writeHeap.addElement("eliza");
		writeHeap.addElement("magda");
		writeHeap.addElement("krysia");
		if (write.empty()){
			cout<<"Kolejka jest pusta.\t"<< endl;
		}
		else
		{
			cout<<"kolejka nie jest pusta.\t\t"<<endl;
		}
		cout << endl << "Kolejka priorytetowa kopcowa: "<< endl;
		writeHeap.Print();
		writeHeap.addElement("jola");
		cout << endl << "Dodano jeden element do kolejki priorytetowej: "<<endl;
		writeHeap.Print();
		cout << "   " << endl;
		cout << "Najwiekszy element: " << writeHeap.getMAX()<< endl;
		cout << "   " << endl;
		cout << "Kolejka po usunieciu najwiekszego elementu: "<<endl;
		writeHeap.Print();
		
return 0;
}
