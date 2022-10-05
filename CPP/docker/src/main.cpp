#include "hello.hpp"
// auto parseArgs(int argc, char* argv[]) {
//   namespace po = boost::program_options;
//   po::options_description desc("Allowed options");
//   desc.add_options()
//     ("help,h", "Produce this message");

//   auto parsed = po::command_line_parser(argc, argv)
//     .options(desc)
//     .allow_unregistered()
//     .run();

//   po::variables_map vm;
//   po::store(parsed, vm);
//   po::notify(vm);

//   // В C++17 больше нет необходимости использовать std::make_pair
//   return std::pair(vm, desc);
// }

int main(int argc, char *argv[])
{
	using namespace std;
	try
	{
		cout << "Hello, World!" << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
	return 0;
}