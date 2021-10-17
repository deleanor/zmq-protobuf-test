load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

git_repository(
  name = "com_google_protobuf",
  remote = "https://github.com/protocolbuffers/protobuf.git",
  tag = "v3.18.1"
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()

git_repository(
  name = "rules_foreign_cc",
  remote = "https://github.com/bazelbuild/rules_foreign_cc.git",
  tag = "0.6.0"
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")
# This sets up some common toolchains for building targets. For more details, please see
# https://github.com/bazelbuild/rules_foreign_cc/tree/main/docs#rules_foreign_cc_dependencies
rules_foreign_cc_dependencies()

new_git_repository(
  name = "zmq",
  remote = "https://github.com/zeromq/libzmq.git",
  tag = "v4.3.4",
  build_file = "zmq.BUILD"
)

new_git_repository(
  name = "cppzmq",
  remote = "https://github.com/zeromq/cppzmq.git",
  tag = "v4.8.1",
  build_file = "cppzmq.BUILD"
)
