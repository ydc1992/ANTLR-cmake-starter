cd "$(dirname "$0")"
top=$(pwd)

mkdir cpp_runtime

curl https://www.antlr.org/download/antlr-4.9.3-complete.jar -L -o antlr.jar

git clone --depth 1 https://github.com/antlr/antlr4 -b 4.9.3
