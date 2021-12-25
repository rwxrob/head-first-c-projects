# Head First C Projects

> ⚠️ 
> I was reminded that the definitive source for all C documentation is
> in the `man` pages. For example, there is no explanation of the `atoi`
> before it is first used, but knowing that anything in the book is also
> covered in more depth in the Manual will help get over this missing
> information (without having to search the Internet).

## Chapter Zero

Get on a Linux (Bash) command line. I chose to just use my PopOS
desktop (which already has `gcc` 10.3 installed) but I also started
making a Docker container to keep with modern development practices.

I set the `CFLAGS` so that `make` works by default without a `Makefile`
at the moment:

```bash
export CFLAGS="-Wall -Wextra -Werror -O0 -g -fsanitize=address -fno-omit-frame-pointer -finstrument-functions"
```

I went ahead and added these to `~/.bashrc`.

We'll be following [Linux Kernel coding style][style]

[style]: <https://www.kernel.org/doc/html/v4.10/process/coding-style.html>
