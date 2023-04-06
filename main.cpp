#include <iostream>
#include "Repository.h"
#include "Service.h"
#include "UI.h"

int main() {
    Repository repository;
    Service service(repository);
    UI ui(service);
    ui.menu();
    return 0;
}
