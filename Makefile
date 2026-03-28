CPPFLAGG = g++ -g -Wall
ARGS:=""

standard: OFile
	$(CPPFLAGG) src/*.o -Iinclude/ -o bin/DebugMain.exe

Main: src/Main.cpp 
	$(CPPFLAGG) -c src/Main.cpp -Iinclude/ -o src/Main.o

Palette: src/Palette.cpp 
	$(CPPFLAGG) -c src/Palette.cpp -Iinclude/ -o src/Palette.o

Gradient: src/Gradient.cpp 
	$(CPPFLAGG) -c src/Gradient.cpp -Iinclude/ -o src/Gradient.o

SilverLining: src/SilverLining.cpp 
	$(CPPFLAGG) -c src/SilverLining.cpp -Iinclude/ -o src/SilverLining.o

AverageTwo: src/AverageTwo.cpp 
	$(CPPFLAGG) -c src/AverageTwo.cpp -Iinclude/ -o src/AverageTwo.o

Chaos: src/Chaos.cpp 
	$(CPPFLAGG) -c src/Chaos.cpp -Iinclude/ -o src/Chaos.o

Fill: src/Fill.cpp 
	$(CPPFLAGG) -c src/Fill.cpp -Iinclude/ -o src/Fill.o

Square: src/Square.cpp 
	$(CPPFLAGG) -c src/Square.cpp -Iinclude/ -o src/Square.o

OFile: Main Palette Gradient SilverLining AverageTwo Chaos Fill Square



vic:
	$(CPPFLAGG) ./src/Vic.cpp -o ./bin/utils/vic.exe

vicExe:
	./bin/utils/vic.exe $(ARGS)



test: 
	./bin/DebugMain.exe

gdb: 
	gdb ./bin/DebugMain.exe




clean:
	rm -f bin/*.exe
	rm -f src/*.o

realease: clean OFile
	$(CPPFLAGG) src/*.o -Iinclude/ -o bin/Graphics.exe

update: clean vicExe
	git add -A
	git commit