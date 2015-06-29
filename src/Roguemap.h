const int SIZE = 40;

class Roguemap
{
	public:
		
		Roguemap();
		~Roguemap();
		
		void generate();
		
		void setSeed(int);
		int getSeed();
		
		void setRandom(bool);
		bool getRandom();
		
		void setRoomSize(int, int);
		void setRooms(int);
		
		void print();
		
	private:
	
		int map[SIZE][SIZE];
		
		int seed;
		bool random;
		
		int min_size;
		int max_size;
		
		int rooms;
};