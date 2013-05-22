#include "ed/source/ed/communications/socket_ready.h"
#include "ed/source/ed/controllers/server_controller.h"
#include "ed/source/ed/3party/win/utils.h"

int f()
{
  ed::com::socket_ready *s = NEW ed::com::socket_ready(3030);
  ed::server_controller<ed::com::socket_ready> controller(s);

  while (true)
  {
    controller.Workflow();
    ed::Sleep(30);
  }
  return 0;
}

int main()
{
  try
  {
    return f();
  } catch (ed::exception *)
  {
  }
  return 239;
}