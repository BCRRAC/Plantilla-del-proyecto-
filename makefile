#Comandos para correr el programa 
bin/EBO.exe : src/BO.cpp
	g++ -o bin/EBO src/BO.cpp -Iinclude

run: bin/EBO.exe	
	./bin/EBO.exe -Iinclude

clean: bin/EBO.exe
	rm -f bin/*.exe