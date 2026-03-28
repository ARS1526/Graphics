CPPFLAGG = g++ -g -Wall -IX:/_Soft/SDL3-3.2.4/x86_64-w64-mingw32/include/ -LX:/_Soft/SDL3-3.2.4/x86_64-w64-mingw32/lib/ -lSDL3.dll
ARGS:=""

standard: OFile
	$(CPPFLAGG) src/*.o -Iinclude/ -o bin/DebugMain.exe

Main: src/Main.cpp 
	$(CPPFLAGG) -c src/Main.cpp -Iinclude/ -o src/Main.o

OFile: Main 



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