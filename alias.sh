# 'source alias.sh' for defined aliases to take an effect
alias b='sh build.b'
alias r='make; if [ $? -eq 0 ]; then clear; echo; echo; ./main; fi; echo; echo;'