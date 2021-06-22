#ifndef ANGRY_CAT_H
#define ANGRY_CAT_H
#include <stdexcept>
#include<string>

using namespace std;
class AngryCat : public runtime_error
{
public: AngryCat() : runtime_error("Kitty is Angry!") {

}
	  AngryCat(const string & err) : runtime_error(err) {

	  }
};


#endif
