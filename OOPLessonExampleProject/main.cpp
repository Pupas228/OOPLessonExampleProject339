#include "manager.h"
#include "doctor.h"

struct Book {
public:
};

int main() {
	Human h;
	h = new int[10];

	h.name = "Alex";
	h.get_surname("...");
	h.set_age(15);

	delete h;

	return 0;
}