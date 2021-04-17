bitti:program calistir
program:siniflar.o
	g++ ./lib/test.o ./lib/Carprazlama.o ./lib/ListeTutucu.o ./lib/CircularLinkedList.o ./lib/Node.o -o ./bin/program
siniflar.o:
	g++ -I "./include" -c ./src/Carprazlama.cpp -o ./lib/Carprazlama.o
	g++ -I "./include" -c ./src/ListeTutucu.cpp -o ./lib/ListeTutucu.o
	g++ -I "./include" -c ./src/CircularDoublyLinkedList.cpp -o ./lib/CircularLinkedList.o
	g++ -I "./include" -c ./src/Node.cpp -o ./lib/Node.o
	g++ -I "./include" -c ./src/test.cpp -o ./lib/test.o
calistir:
	./bin/program.exe
