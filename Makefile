all: compile link

compile:
	g++ -c main.cpp -I"C:\\Users\\Shehan\\Documents\\Libraries\\SFML-3.0.0\\include" -DSFML_STATIC

link:
	g++ main.o -o game -L"C:\\Users\\Shehan\\Documents\\Libraries\\SFML-3.0.0\\lib" -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f main *.o