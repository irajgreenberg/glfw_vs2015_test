#include "ProtoPlasm.h"
#include "ProtoController.h"
#include <iostream>

int main(int argc, char const** argv) {
		new ijg::ProtoPlasm (3000, 1500, "ProtoController", new ProtoController());
		return EXIT_SUCCESS;
}