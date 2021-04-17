bitti:program calistir
program:siniflar.o
	g++ ./lib/test.o ./lib/NewNode.o ./lib/Avl.o ./lib/ElemanEkle.o ./lib/Yazdir.o -o ./bin/program
siniflar.o:
	g++ -I "./include" -c ./src/Yazdir.cpp -o ./lib/Yazdir.o
	g++ -I "./include" -c ./src/ElemanEkle.cpp -o ./lib/ElemanEkle.o
	g++ -I "./include" -c ./src/Avl.cpp -o ./lib/Avl.o
	g++ -I "./include" -c ./src/NewNode.cpp -o ./lib/NewNode.o
	
	g++ -I "./include" -c ./src/test.cpp -o ./lib/test.o
calistir:
	./bin/program.exe

