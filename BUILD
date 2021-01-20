load("@rules_cc//cc:defs.bzl", "cc_binary")
load("@com_grail_bazel_compdb//:aspects.bzl", "compilation_database")

cc_binary(
    name = "my-app",
    srcs = ["main.cc"],
)

compilation_database(
    name = "comp-db",
    targets = [ "//:my-app" ],
)