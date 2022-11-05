TEMPLATE="/home/ariel/Documents/Competitive-Programming/Template"
MAIN="main.cpp"
INPUT="input.txt"
OUTPUT="output.txt"
ERROR="error.txt"
DEBUG="debug.h"

function dev() {
    if [ ! -f main.cpp ]; then
        cp "$TEMPLATE/main.cpp" "."
    fi

    if [ ! -f debug.h ]; then
        cp "$TEMPLATE/debug.h" "."
    fi

    touch {input,output,error}.txt
}

function com() {
	g++ "$MAIN" -o "main" -DLOCAL -DDEBUG='"debug.h"'
}

function test() {
    ./main
}

function run() {
    com && test
}

function copy() {
    cat "$MAIN" | xclip -sel clip
}

function ost() {
    if [ -f "$MAIN" ] && [ -f "$INPUT" ] && [ -f "$OUTPUT" ] && [ -f "$ERROR" ] && [ -f "$DEBUG" ]; then
        subl --command "focus_group { \"group\": 0 }"
        subl --command "close_file"
        subl "$MAIN"

        subl --command "focus_group { \"group\": 1 }"
        subl --command "close_file"
        subl "$INPUT"

        subl --command "focus_group { \"group\": 2 }"
        subl --command "close_file"
        subl --command "close_file"
        subl "$OUTPUT"
        subl "$ERROR"
    else
        echo test
    fi
}
