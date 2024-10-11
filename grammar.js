/**
 * @file Munchausen scenario DSL
 * @author Renat Vasilyev <renat@nosto.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />

// @ts-check

module.exports = grammar({
  name: "scenario",
  externals: ($) => [$.indent, $.dedent, $.newline],
  rules: {
    source_file: ($) => repeat($.expr),
    expr: ($) => choice($.statement, $.flow_control),
    statement: ($) => seq($.command, $.newline),
    command: ($) => choice($.conf, $.complex),
    conf: ($) => seq("conf", $.var, "=", $.str),
    var: ($) => $.word,
    fn: ($) => $.word,
    complex: ($) => seq($.fn, repeat($.arg)),
    arg: ($) => choice($.word, seq($.word, ":", $.word)),
    word: ($) => /[^\s=:]+/,
    str: ($) => /[^\s]+/,
    block: ($) => seq($.indent, repeat($.expr), $.dedent),
    flow_control: ($) => seq($.command, $.block),
  },
});
