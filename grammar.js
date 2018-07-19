module.exports = grammar({
  name: 'test',

  extras: $ => [/\s/],

  rules: {
    program: $ => repeat(choice($.test, $._newline)),

    test: $ => seq(
      $.header,
      optional($.body),
      $.dash_divider,
      repeat($._newline),
      $.s_expression
    ),

    header: $ => seq(
      $.eq_divider,
      $._newline,
      $.heading_name,
      $._newline,
      $.eq_divider,
      $._newline
    ),

    // body: $ => repeat1(choice(/[^\n]/, /\n[^\-]/, /\n\-[^-]/)), // for tests
    body: $ => repeat1(choice(/[^\n]/, /\n[^\-]/, /\n\-[^-]/, /\n\-\-[^\-]/)),

    // eq_divider: $ => /==+/,
    eq_divider: $ => /===+/,

    // dash_divider: $ => /\n\-\-+/,
    dash_divider: $ => /\n\-\-\-+/,

    _newline: $ => /\r?\n/,

    heading_name: $ => /[^\r\n=]+/,

    s_expression: $ => $._term,

    _term: $ => choice(
      $.group,
      $.identifier
    ),

    group: $ => seq("(", repeat($._term), ")"),

    identifier: $ => { // from tree-sitter-javascript
      const alpha = /[^\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/
      const alpha_numeric = /[^\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]/

      return token(seq(alpha, repeat(alpha_numeric)))
    }
  }
})
