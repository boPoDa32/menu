#include <string>
using namespace std;
class Menu
{
private:
  string nameprod;
	int weight;
	int number;
public:
	Menu();
	Menu(string,int,int);

void set (string,int,int);
int get();
void displayMenu();
};
