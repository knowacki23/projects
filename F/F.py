# -*- coding: utf-8 -*-
def Read(list):
    with open('tekst.txt', 'r') as file_open:
        for line in file_open:
            if len(line.strip()):
                row = line.split()
                list.append(row)


def Delete(file):
    with open(file, 'r') as file_open:
        count = sum(1 for line in file_open)
        print('\nIlość linii przed sprzątaniem: ', count)
    with open(file, 'r') as file_open:
        with open('delete_empty.txt', 'w') as emptyLines:
            emptyLines.write('Plik po sprzątaniu: \n\n')
            for lines in file_open:
                if len(lines.strip())>0:
                    emptyLines.write(lines)
                else:
                    pass
    with open('delete_empty.txt', 'r') as Empty:
        count = sum(1 for lines in Empty)
        print('Ilosc linii po sprzataniu: ', count)

def SortBytFirstColumn(list):
    sort = sorted(list)
    with open('sort_FirstColumn.txt', 'w') as SortByFirstColumn:
        length = len(sort)
        for i in range(0, length):
            for j in range(0, len(sort[i])):
                SortByFirstColumn.write(sort[i][j] + ' ')
            SortByFirstColumn.write('\n')
    print ('\nSortowanie po pierwszej kolumnie.')


def SortRow(list, lines):
    for line in list:
        sort = sorted(line)
        lines.append(sort)
        with open('sort_Row.txt', 'w') as SortRow:
            for i in range(0, len(lines)):
                for j in range(0, len(lines[i])):
                    SortRow.write(lines[i][j] + ' ')
                SortRow.write('\n')
    print ('\nSortowanie każdego wiersza.')


def SortByLastColumn(list):
    for line in list:
        Reverse = line.reverse()
    sort = sorted(list)
    for Reverse in sort:
        Sorted = Reverse.reverse()
    with open('sort_LastColumn.txt', 'w') as SortByLastColumn:
        for i in range(0, len(sort)):
            for j in range(0, len(sort[i])):
                SortByLastColumn.write(sort[i][j]+' ')
            SortByLastColumn.write('\n')
    print ('\nSortowanie po ostatniej kolumnie.')


file = 'tekst.txt'
wordToFind = 'to'
lines=[]
list= []
counter1 = 0
counter2 = 0



try:
    with open('findWord.txt', 'w') as write:
        with open('tekst.txt', 'r') as sourceFile:
            for line in sourceFile:
                for word in line.split():
                    counter2 += 1
                    if (word == wordToFind):
                        counter1 += 1
                        write.write('Slowo: ' + wordToFind + ' -zostalo umieszczone w tekscie ' + str(
                            counter1) + ' raz. Slowo na miejscu: ' + str(counter2)+'\n')
                    else:
                        pass
except IOError:
    print('Plik nie jest dotepny')



Delete(file)
Read(list)
SortBytFirstColumn(list)
SortRow(list, lines)
SortByLastColumn(list)


