#include <iostream>

using namespace std;

struct Box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showValue(Box);
void setVolume(Box*);

int main()
{
	Box box = { "Will Smith", 2.5, 3.3, 5.0, 0 };
	showValue(box);
	setVolume(&box);
	cout << "\n\nWith volume calculated: \n";
	showValue(box);

	return 0;
}

void showValue(Box ourStruct)
{
	cout << "Struct details\n";
	cout << "Struct maker: " << ourStruct.maker << endl;
	cout << "Struct height: " << ourStruct.height << endl;
	cout << "Struct width: " << ourStruct.width << endl;
	cout << "Struct length: " << ourStruct.length << endl;
	cout << "Struct volume: " << ourStruct.volume << endl;
}

void setVolume(Box* ourStruct)
{
	ourStruct->volume = ourStruct->height * ourStruct->width * ourStruct->length;
}