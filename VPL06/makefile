vpl_execution: build/main.o build/Circulo.o build/Ponto.o
	g++ build/main.o build/Circulo.o build/Ponto.o -o vpl_execution

build/main.o: src/main.cpp include/Ponto.hpp include/Circulo.hpp
	g++ -Iinclude -c src/main.cpp -o build/main.o

build/Circulo.o: src/entidades/Circulo.cpp include/Circulo.hpp include/Ponto.hpp
	g++ -Iinclude -c src/entidades/Circulo.cpp -o build/Circulo.o

build/Ponto.o: src/entidades/Ponto.cpp include/Ponto.hpp
	g++ -Iinclude -c src/entidades/Ponto.cpp -o build/Ponto.o