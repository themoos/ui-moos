#include "MOOS/AlogTools/FileNotFoundException.h"

using namespace std;

namespace MOOS {
namespace AlogTools {

FileNotFoundException::FileNotFoundException(const string &msg) : runtime_error(msg) {
}

}  // namespace AlogTools
}  // namespace MOOS
