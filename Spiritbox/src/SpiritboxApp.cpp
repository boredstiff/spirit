#include <Spirit.h>

class Spiritbox : public Spirit::Application {
public: 
	Spiritbox() {}
	~Spiritbox() {}
};

Spirit::Application* Spirit::CreateApplication() {
	return new Spiritbox();
}