import assert from "node:assert";
import { test } from "node:test";

test("can load grammar", () => {
  assert.doesNotReject(async () => {
    const { default: language } = await import("./index.js");
    // This test intentionally avoids depending on the `tree-sitter` npm package,
    // since that package currently fails to compile on very new Node versions
    // (e.g. Node 25 requiring C++20) in some environments.
    assert.ok(language, "binding should export a language object");

    // A couple of sanity checks that don't require Parser.
    assert.ok(
      typeof language === "object" || typeof language === "function",
      "binding export should be an object/function"
    );
    assert.ok(
      "HIGHLIGHTS_QUERY" in language,
      "binding should expose bundled query strings"
    );
  });
});
