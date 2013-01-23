#ifndef FileNotFoundException_H
#define FileNotFoundException_H

#include <stdexcept>
#include <string>

namespace MOOS {
namespace AlogTools {

class FileNotFoundException : public std::runtime_error {
  FileNotFoundException& operator = (const FileNotFoundException &other);

public:
  FileNotFoundException(const std::string &msg = "");
  FileNotFoundException(const FileNotFoundException &other);

protected:

};

}  // namespace AlogTools
}  // namespace MOOS

#endif // FileNotFoundException_H
