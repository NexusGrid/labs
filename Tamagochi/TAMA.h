
class tama {

private:
	int food, life, mood, hygi;
public:
	tama() { food = 100; life = 100; mood = 100; hygi = 100; }
	~tama() {};
	void feed();
	void play();
	void wash();

	int getFood();
	int getLife();
	int getMood();
	int getHygi();

	void endDayFood();
	void endDayMood();
	void endDayHygi();

};