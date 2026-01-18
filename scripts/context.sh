#!/usr/bin/env bash
set -euo pipefail

mkdir -p scripts/output

MODE="${1:-all}"

if [ "$MODE" = "all-root" ]; then
  FILES=$(git ls-files '*' ':!*/*' || true)
elif [ "$MODE" = "algorithms" ]; then
  FILES=$(git ls-files 'algorithms/**')
elif [ "$MODE" = "contests" ]; then
  FILES=$(git ls-files 'contests/**')
elif [ "$MODE" = "contests-cses" ]; then
  FILES=$(git ls-files 'contests/cses/**')
elif [ "$MODE" = "docs" ]; then
  FILES=$(git ls-files 'docs/**')
elif [ "$MODE" = "scripts" ]; then
  FILES=$(git ls-files 'scripts/**')
elif [ "$MODE" = "showcase" ]; then
  FILES=$(git ls-files 'showcase/**')
else
  FILES=$(git ls-files)
fi

OUTPUT="scripts/output/context-$MODE.txt"
MAX_SIZE=20000

print_line() {
  local char="$1"
  printf "%*s\n" 80 "" | tr " " "$char"
  printf "\n"
}

{
  echo "PROJECT CONTEXT ($MODE)"
  echo "Date: $(date)"
  print_line "="

  echo "PROJECT TREE"
  print_line "-"
  echo "$FILES"
  echo

  echo "FILE CONTENT"
  print_line "-"
  echo "$FILES" | while read -r file; do
    [ -f "$file" ] || continue
    if ! file "$file" | grep -q text; then
      continue
    fi
    size=$(wc -c <"$file")
    echo
    echo "[$file]"
    print_line "."

    if [ "$size" -lt "$MAX_SIZE" ]; then
      cat "$file"
    else
      echo "[FILE TOO LARGE - SHOWING STRUCTURE]"

      if [[ "$file" == *.py ]]; then
        grep -E "^(class |def )" "$file" || true
      else
        head -n 40 "$file"
        echo "... (truncated)"
      fi
    fi
    echo
  done
} >"$OUTPUT"
