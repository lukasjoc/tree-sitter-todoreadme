module.exports = {
    "env": {
        "commonjs": true,
        "es2021": true,
        "node": true,
    },
    "extends": "eslint:recommended",
    "overrides": [
    ],
    "parserOptions": {
        "ecmaVersion": "latest",
    },
    "rules": {
        "indent": [ "error", 4 ],
        "linebreak-style": [ "error", "unix" ],
        "quotes": [ "error", "double" ],
        "semi": [ "error", "always" ],
        "no-undef": "off",
        "no-unused-vars": "off",
        "comma-dangle": ["error", "always-multiline"],
    },
};
