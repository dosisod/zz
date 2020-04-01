#include <string>
#include <any>

class Template {
public:
	Template(const std::string filename);

	std::string render() const;

protected:
	std::string parseAny(std::any data) const;

private:
	std::string filename;
};
