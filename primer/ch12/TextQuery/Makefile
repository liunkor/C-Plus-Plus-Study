CC = g++ -std=c++11
wordQuery:TextQuery.o queryMain.o 
	$(CC) -o $@  TextQuery.o queryMain.o

TextQuery.o:TextQuery.cc TextQuery.h QueryResult.h
	$(CC) -o  TextQuery.o  -c TextQuery.cc

queryMain.o:queryMain.cc TextQuery.h
	$(CC) -o  queryMain.o -c queryMain.cc

clean:
	rm *.o wordQuery
