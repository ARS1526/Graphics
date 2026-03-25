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

OFile: Main Palette Gradient



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