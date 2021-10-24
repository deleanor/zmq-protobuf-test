cc_binary(
  name = "message-server",
  srcs = ["server.cpp"],
  deps = [
    "@com_google_protobuf//:protobuf",
    "@zmq//:libzmq",
    "@cppzmq//:cppzmq"
  ],
)

cc_binary(
  name = "message-client",
  srcs = ["client.cpp"],
  deps = [
    "@com_google_protobuf//:protobuf",
    "@zmq//:libzmq",
    "@cppzmq//:cppzmq"
  ],
)
