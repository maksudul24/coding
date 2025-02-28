 " Vim with all enhancements
 source $VIMRUNTIME/vimrc_example.vim
 
 " Use the internal diff if available.
 " Otherwise use the special 'diffexpr' for Windows.
 if &diffopt !~# 'internal'
 set diffexpr=MyDiff()
 endif
 function MyDiff()
 let opt = '-a --binary '
 if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
 if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
 let arg1 = v:fname_in
 if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
 let arg1 = substitute(arg1, '!', '\!', 'g')
 let arg2 = v:fname_new
 if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
 let arg2 = substitute(arg2, '!', '\!', 'g')
 let arg3 = v:fname_out
 if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
 let arg3 = substitute(arg3, '!', '\!', 'g')
 if $VIMRUNTIME =~ ' '
 if &sh =~ '\<cmd'
 if empty(&shellxquote)
 let l:shxq_sav = ''
 set shellxquote&
 endif
 let cmd = '"' . $VIMRUNTIME . '\diff"'
 else
 let cmd = substitute($VIMRUNTIME, ' ', '" ', '') . '\diff"'
 endif
 else
 let cmd = $VIMRUNTIME . '\diff'
 endif
 let cmd = substitute(cmd, '!', '\!', 'g')
 silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
 if exists('l:shxq_sav')
 let &shellxquote=l:shxq_sav
 endif
 endfunction
 
 set number
 set nocompatible
 syntax on
 set nowrap
 set autoindent
 map <C-a> <ESC>^
 imap <C-a> <ESC>I
 map <C-e> <ESC>$
 imap <C-e> <ESC>A
 set tabstop=4
 set shiftwidth=4
 set expandtab
 set number relativenumber
 "set nu rnu
 set belloff=all
 set mouse=a

inoremap {<CR> {<CR>}<ESC>O
inoremap {;<CR> {<CR>};<ESC>O
 

call plug#begin('~/.vim/plugged')

Plug 'preservim/nerdtree'
Plug 'vim-airline/vim-airline'
Plug 'webdevel/tabulous'
Plug '907th/vim-auto-save'
Plug 'chrisbra/vim-commentary'

call plug#end()

nnoremap <C-n> :NERDTreeToggle<CR>
"autocmd BufWinEnter * if &buftype != 'quickfix' && getcmdwintype() == '' | silent NERDTreeMirror | endif
let tabulousCloseStr = ''

"autosave
let g:auto_save = 1
let g:auto_save_silent = 1
let g:auto_save_events = ["InsertLeave", "TextChanged"]

"terminal window in the right with a fixed size 20
set termwinsize=0x20
"autocmd VimEnter * botright vertical terminal  
nnoremap <M-t> :botright vertical terminal<CR>

"nnoremap <M-t> :if bufexists("term://*") | bd! term://* | else | botright vertical terminal | endif<CR>
autocmd BufEnter * if winnr('$') == 1 && &buftype == 'terminal' | quit! | endif
