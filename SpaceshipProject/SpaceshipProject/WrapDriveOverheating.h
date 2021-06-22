#ifndef WRAPDRIVEOVERHEATING_H
#define  WRAPDRIVEOVERHEATING_H
#include<stdexcept>
using namespace std;

class wrapDriveOverheating : public overflow_error {
public:
	wrapDriveOverheating() : overflow_error("Temperature Limit Exceeded"){
	
	}
};



#endif