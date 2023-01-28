module.exports = grammar({
    name: "todoreadme",

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat1($.block),
        block: $ => seq($.header, $.text),

        // Header Types
        header: $ => choice($.standard_header, $.category_header),
        standard_header: $ => seq($.identifier, ":"),
        category_header: $ => seq($.identifier, $.categories, ":"),
        // ###

        // Category Support
        categories: $ => seq("[", repeat1($.category), "]"),
        category: $ => seq($.category_identifier, optional(",")),
        // ###

        // Identifiers
        identifier: _$ => /(current|task|idea|later)/,
        category_identifier: _$ => /[a-zA-Z0-9-_:@#]+/,
        // ###

        // TODO: support lists
        text: _$ => /.*/,
    },
});
