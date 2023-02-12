# todoreadme

> todoreadme grammar for tree-sitter

Usage:


Local Dev:
```bash
pnpm install
pnpm build
pnpm test
```

Usage in NeoVim:
- Setup Custom parser+FileType Detection @see github.com/lukasjoc/nvim
- Add queries to rtp
- Add some highlight links
```lua
vim.cmd("hi link @todoreadmeHeader Identifier")
vim.cmd("hi link @todoreadmeCategory Special")
vim.cmd("hi link @todoreadmeDelimiter Delimiter")
```
