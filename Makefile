all:
	g++ src/*.cpp src/ipc/*.cpp -lX11 -llua -o swm

