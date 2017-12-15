#include <vector>
using namespace std;

class Ship
{
public:
	vector<ShipCell> ship_position;
	bool sinked;
	vector<Coordinates> range;
	bool double_shoot;

	void sink_status();
	void calculate_range();
	bool in_range(Coordinates cor);
	void update_damaged_cells(ShipCell hitCell)
};

class ShipCell
{
public:
	Coordinates position;
	bool is_damaged;
};

class Options
{
public:
	int mode;
	int num_of_rounds;
	int graphics_mode;

	void check_options();
};

struct Coordinates
{
public:
	int x;
	int y;
};

class Board
{
public:
	int board[10][10];
	vector<Coordinates> avaliable_space;
	vector<Coordinates> ships;
	vector<Coordinates> shooted;

	bool is_avaliable_to_shoot(Coordinates cell);
	bool ship_position(Ship ship);
	bool check_if_hit(Coordinates shoot_position);
	void update_board();
	void mark_shoot(Coordinates shoot);
	void display_the_board(Graphics* interface)
};

class Player
{
public:
	char name[24];
	ships[SHIP_NUMBER] my_ships;
	Board my_board;
	Board opp_board;

	void place_ships();
	void round();
	void shoot();
	bool if_stack();
	Ship update_ships();
	Ship choose_ship();
	void set_name();
	void set_board(Board* opp_board, Board* my_board);
};

class Game
{
public:
	int number_of_rounds;
	Player one;
	Player two;
	int current_round; 

	Game(int rounds);
	void perform_round();
	bool win_conditions();
	bool end_conditions();
	void initialize_players();
	void perform_spectator_game();
};

class CPU
{
public:
	int Mode;

	void Automatic_round();
	void set_mode();
	CPU(int mode);
	void strategy();
};

class Greedy
{
public:
	void strategy();
};

class Random
{
public:
	void strategy();
};


class Graphic
{
public:
	Board board;

	void use_interface(Interface interface);
};

virtual class interface
{
public:
	void display_board();
};

class CLI
{
public:
	void display_board();
};

class GUI
{
public:
	void display_board();
};


