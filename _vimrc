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
"set termwinsize=0x20
"autocmd VimEnter * botright vertical terminal  


function! OpenTerminalRight()
    botright vsplit
    vertical resize 40
    terminal++curwin
endfunction

nnoremap <M-t> :call OpenTerminalRight()<CR>

autocmd BufEnter * if winnr('$') == 1 && &buftype == 'terminal' | quit! | endif


"this will run file in terminal with input showing if compiled correctly using
"python.rn use Alt + e



function! RunCodeWithInput()
  let term_buffers = term_list()

  if empty(term_buffers)
    call OpenTerminalRight()
    let buf = bufnr('%')
  else
    let buf = term_buffers[0]
  endif

  call term_sendkeys(buf, "python rn.py\<CR>")
endfunction

nnoremap <M-e> :call RunCodeWithInput()<CR>

"this will just run the code binary, use Alt + r


function! RunCode()
  let term_buffers = term_list()

  if empty(term_buffers)
    call OpenTerminalRight()
    let buf = bufnr('%')
  else
    let buf = term_buffers[0]
  endif

  call term_sendkeys(buf, "a\<CR>")
endfunction

" Map <M-r> to call the function
nnoremap <M-r> :call RunCode()<CR>





"this function will compile file using python.cmp, use Alt + b


function! CompileCode()
  let term_buffers = term_list()

  if empty(term_buffers)
    call OpenTerminalRight()
    let buf = bufnr('%')
  else
    let buf = term_buffers[0]
  endif
  call term_sendkeys(buf, "python cmp.py\<CR>")
endfunction

nnoremap <M-b> :call CompileCode()<CR>




"this will copy code to the clipboard with '//' added in the 'open_file', use
"Alt + p

function! PasteCode()
  let term_buffers = term_list()

  if empty(term_buffers)
    call OpenTerminalRight()
    let buf = bufnr('%')
  else
    let buf = term_buffers[0]
  endif
  call term_sendkeys(buf, "python pst.py\<CR>")
endfunction

nnoremap <M-p> :call PasteCode()<CR>




"this will paste input.txt from clipboard use Alt + c


function! CopyInput()
  let term_buffers = term_list()

  if empty(term_buffers)
    call OpenTerminalRight()
    let buf = bufnr('%')
  else
    let buf = term_buffers[0]
  endif
  call term_sendkeys(buf, "python cp.py\<CR>")
endfunction

nnoremap <M-c> :call CopyInput()<CR>


