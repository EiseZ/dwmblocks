// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Prefix*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"^c#5e81ac^ VOL ^c#ffffff^",     "pactl get-sink-volume 0 | awk '{ printf($5) }'", 10, 5},
    {"^c#5e81ac^CPU ^c#ffffff^",     "$HOME/scripts/bar/cpu.sh", 10, 4},
    {"^c#5e81ac^MEM ^c#ffffff^",     "$HOME/scripts/bar/memory.sh", 10, 3},
    {"^c#5e81ac^DSK ^c#ffffff^",     "df --total -h | grep '/dev/nvme0n1p7' | awk '{ print($5) }'", 600, 2},
	{"",	    "date +'%a %d %b - %T '",	1,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "   ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
