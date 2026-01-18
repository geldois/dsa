#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

"$SCRIPT_DIR/context.sh" all
"$SCRIPT_DIR/context.sh" all-root
"$SCRIPT_DIR/context.sh" algorithms
"$SCRIPT_DIR/context.sh" contests
"$SCRIPT_DIR/context.sh" contests-cses
"$SCRIPT_DIR/context.sh" docs
"$SCRIPT_DIR/context.sh" scripts
"$SCRIPT_DIR/context.sh" showcase

"$SCRIPT_DIR/delta.sh" all
"$SCRIPT_DIR/delta.sh" all-root
"$SCRIPT_DIR/delta.sh" algorithms
"$SCRIPT_DIR/delta.sh" contests
"$SCRIPT_DIR/delta.sh" contests-cses
"$SCRIPT_DIR/delta.sh" docs
"$SCRIPT_DIR/delta.sh" scripts
"$SCRIPT_DIR/delta.sh" showcase

echo "snapshot generated"
