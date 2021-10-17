load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
  name = "src",
  srcs = glob(["**"]),
  visibility = ["//visibility:public"],
)

cmake(
  name = "libzmq",
  lib_source = ":src"
)