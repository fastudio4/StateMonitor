#include "application.h"

namespace APP {

Application::Application(int &argc, char *argv[])
    :QApplication(argc, argv)
{
    setApplicationName(tr("State monitor"));
    setOrganizationName(tr("Transport automated systems"));
    setApplicationVersion("0.1.0");

}

Application::~Application()
{

}

}
