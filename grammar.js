module.exports = grammar({
    name: "todoreadme",
    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat1($.block),
        block: $ => seq(
            $.start_of_line,
            // the rest is just basic text
            $.text,
        ),

        // a header variant with categories
        // a list or some text that needed wrapping
        start_of_line: $ => choice(
            $.standard_header,
            $.category_header,
            $.li,
            $.wrapped_text,
        ),

        standard_header: $ => seq($.identifier, ":"),
        category_header: $ => seq($.identifier, $.categories, ":"),
        categories: $ => seq("[", repeat1($.category), "]"),
        category: $ => seq($.category_identifier, optional(",")),

        identifier: _$ => /(current|task|idea|later)/,
        category_identifier: _$ => /[a-zA-Z0-9-_]+/,
        li: $ => seq(/- /, $.text),
        wrapped_text: $ => seq("| ", $.text),
        text: _$ => /.*/,
    },
});

