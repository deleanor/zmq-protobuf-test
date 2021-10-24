
#include "zmq.hpp"

#include <chrono>
#include <iostream>
#include <string>
#include <string_view>
#include <thread>

int main(int argc, char * argv [])
{
  zmq::context_t context{1};

  zmq::socket_t socket{context, zmq::socket_type::rep};
  socket.bind("tcp://*:5555");

  constexpr std::string_view message = "World";

  std::cout << "Waiting for message..." << std::endl;

  for(;;)
  {
    zmq::message_t request;
    socket.recv(request, zmq::recv_flags::none);
    std::cout << "Received message: " << request << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds{1});
    socket.send(zmq::buffer(message), zmq::send_flags::none);
  }
}
