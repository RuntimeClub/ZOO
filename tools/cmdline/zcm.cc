#include "type_definition.h"
using namespace std;

namespace zoo {
  static int zcmd(int argc, char** argv) {
    CoreEngine* engine;
    ProcessArgsForZcmd(&argc, &argv);
    Logger* Logger = Logger::getInstance();
    if (!engine = CoreEngine::Create(argc, argv)) {
      Logger->w("Fail to Create CoreEngine!");
      return -1;
    }
    // char sig = signature of main
    int exec_result = InvokeEntryFunction(engine, "main", sig);

    if (!exec_result) {
      Logger->e("Error when Invoke Entry Function");
    }

    DestroyEngine();
    return exec_result;

  }
} // namespace zoo

int main (int argc, char* argv[]) {
   return zoo::zcmd(argc, argv);  
}
