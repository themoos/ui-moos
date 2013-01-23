#include "MOOS/AlogTools/VersionException.h"

using namespace std;

namespace MOOS {
namespace AlogTools {

VersionException::VersionException(const string &msg) : runtime_error(msg) {
}

}  // namespace AlogTools
}  // namespace MOOS
