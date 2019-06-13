all:
	g++ main.cpp Character.cpp Hero.cpp Swordsman.cpp Room.cpp -o playGame
debug:
	g++ -g main.cpp Character.cpp Hero.cpp Swordsman.cpp Room.cpp -o playGame
