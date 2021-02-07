cmake_minimum_required(VERSION 3.19)
project(ThePirateProject VERSION 0.0.1 LANGUAGES CXX)

find_package(SFML 2.5 COMPONENTS main system window graphics audio REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TPP_SRC
	"src/main.cpp"
	"src/player.cpp"
	"src/bateau.cpp"
	"src/canon.cpp"
	"src/cible.cpp"
	"src/ship.cpp"
	"src/sidebar.cpp"
	"src/voile.cpp"
)

add_executable(ThePirateProject ${TPP_SRC})
target_link_libraries(ThePirateProject sfml-graphics sfml-audio)
