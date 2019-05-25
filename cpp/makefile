all: Game

Game: Player.o Game.cpp
	g++ Player.o Game.cpp -o Game

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

val:
	valgrind --leak-check=full ./Game
clean:
	rm Player.o
	rm Game

run:
	./Game

#val:
	#valgrind --leak-check=full --log-file=valgrind.txt ./driver
