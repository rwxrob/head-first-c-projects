# Head First C Projects

## Chapter Zero

Get on a Linux (Bash) command line. I chose to just use my PopOS
desktop (which already has `gcc` 10.3 installed) but I also started
making a Docker container to keep with modern development practices.

I set the `CFLAGS` so that `make` works by default without a `Makefile`
at the moment:

```bash
export CFLAGS="-Wall -Wextra -Werror"
```

I went ahead and added these to `~/.bashrc`.

## Chapter One

I wrote all this code out in an file and ran it first. Then answered the
questions.


1. Assigns the number 11 to the variable `card_count`
1. Checks the value of `card_count` to see if greater than 10 
