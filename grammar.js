module.exports = grammar({
    name: "todoreadme",
    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat1($.block),
        block: $ => seq(
            $.start_of_line,
            // the rest is just basic text
            // TODO: maybe add url matching
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

        standard_header: $ => seq($.identifier, $.end_header),
        category_header: $ => seq($.identifier, $.categories, $.end_header),
        end_header: _$ =>  /:/,

        categories: $ => seq("[", repeat1($.category), "]"),
        category: $ => seq($.category_identifier, optional(",")),

        identifier: _$ => /(current|task|idea|later|til)/,
        category_identifier: _$ => /[a-zA-Z0-9-_]+/,

        li: $ => seq($.begin_li, " ", $.text),
        begin_li: _$ => /-/,

        wrapped_text: $ => seq($.begin_wrapped_text, " ", $.text),
        begin_wrapped_text: _$ => /\|/,

        text: _$ => /.*/,
    },
});

