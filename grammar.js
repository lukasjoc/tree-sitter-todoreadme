module.exports = grammar({
    name: "todoreadme",
    rules: {
        source_file: $ => repeat($.action),
        action: $ => choice($.single_line_action),
        single_line_action: $ => seq($.identifier, ":", $.text),
        identifier: $ => /current|task|idea|later/,
        text: $ => /.*/
    }
});
