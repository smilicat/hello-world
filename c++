#include <iostream.h>
#include <string>

using namespace std;

// class
class MainClass {
private:
	string name;

public:
	void setName(string x) {
		name = x;
	}

	string getName() {
		return name;
	}
};

int main() {
	int ret;
	MainClass mainObject;
	mainObject.setName("money");
	cout << mainObject.getName();

	return 0;
}
