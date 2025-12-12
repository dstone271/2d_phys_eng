CPPFLAGS = -c -Iinclude/
LDLIBS = -lsfml-system -lsfml-window -lsfml-graphics

game_app : game_app.o vector2.o
	g++ -o game_app game_app.o vector2.o $(LDLIBS)

game_app.o : src/game_app.cc
	g++ $(CPPFLAGS) src/game_app.cc

vector2.o : src/math/vector2.cc
	g++ $(CPPFLAGS) src/math/vector2.cc

clean :
	rm *.o game_app
