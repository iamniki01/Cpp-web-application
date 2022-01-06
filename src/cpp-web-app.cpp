#include <cinatra.hpp>
using namespace cinatra;


int main() {
  int maximum_thread_number = std::thread::hardware_concurrency();
  http_server server(maximum_thread_number);
  server.listen("0.0.0.0", "3000");
  server.set_http_handler<GET>(
    "/", [](request& req, response& res) {
      res.set_status_and_content(status_type::ok, "Hello World");
    }
  );
  server.run();
  return 0;
}