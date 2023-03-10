/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int instant = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Cascadia Code:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
                           /*     fg         bg       */
    [SchemeNorm]          = { "#ffffff", "#5d6f74" },
    [SchemeSel]           = { "#9898ae", "#5d6f74" },
    [SchemeOut]           = { "#63b0b0", "#282828" },
    [SchemeSelHighlight]  = { "#a9d1df", "#282828" },
    [SchemeNormHighlight] = { "#e6ebe5", "#282828" },
};


/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
