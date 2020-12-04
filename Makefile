count: main.o 
	g++ main.o -o count

main.o: main.cc 
	g++ -c main.cc

clean:
	rm main.o

doc: config
	doxygen config

config:
	doxygen -g config

check:
	cppcheck main.cc
	valgrind wc ./count.exe