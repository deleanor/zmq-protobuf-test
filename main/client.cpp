#include "zmq.hpp"

#include <iostream>
#include <string>

int main(int argc, char * argv[])
{
  zmq::context_t context{1};
  zmq::socket_t socket{context, zmq::socket_type::req};
  socket.connect("tcp://localhost:5555");
  constexpr std::string_view data{"Hello"};
  for (int i = 0; i < 5; i++) {
    socket.send(zmq::buffer(data), zmq::send_flags::none);
    zmq::message_t message;
    socket.recv(message, zmq::recv_flags::none);
    std::cout << message << std::endl;
  }
  return 0;
}
