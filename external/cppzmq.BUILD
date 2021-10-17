load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
  name = "src",
  srcs = glob(["**"]),
  visibility = ["//visibility:public"],
)

cmake(
  name = "cppzmq",
  lib_source = ":src",
  visibility = ["//visibility:public"],
  deps = ["@zmq//:libzmq"]
)