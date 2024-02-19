#ALIASES   ============================================

alias testalias='ls -al
alias zshrc='nano ~/.zshrc'
alias sors='source ~/.zshrc'
alias vsc="open -a 'Visual Studio Code'"
alias gccf='gcc -Wall -Werror -Wextra -pedantic -std=c11 -o test'
alias clangg='clang-format -style=Google -n *.c *.h && clang-format -style=Google -i *.c *.h'
alias cppchk='cppcheck --enable=all --suppress=missingIncludeSystem *.c'


#IMPORTANT STUFF  ============================================

function instabrew {
        cd ~ && cd goinfre
        git clone https://github.com/Homebrew/brew homebrew
        eval "$(~/goinfre/homebrew/bin/brew shellenv)"
        brew update --force --quiet
        chmod -R go-w "$(brew --prefix)/share/zsh"
        brew install lcov
}

function instadock {
        rm -rf ~/Library/Containers/com.docker.docker
        mkdir -p ~/goinfre/Docker/Data
        ln -s ~/goinfre/Docker ~/Library/Containers/com.docker.docker
}

function instaall {
        instadock
        instabrew
}

function bree {
        eval "$(/opt/goinfre/reginaha/homebrew/bin/brew shellenv)"
        chmod -R go-w "$(brew --prefix)/share/zsh"
}



