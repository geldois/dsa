from __future__ import annotations

import sys

from scripts.fix import run_fix


def main(argv: list[str]) -> int:
    if argv != ["fix"]:
        sys.stderr.write("usage: python -m scripts fix\n")
        return 2

    return run_fix()


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
