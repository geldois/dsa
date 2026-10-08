from __future__ import annotations

import subprocess

_UV_RUN = ("uv", "run", "--no-sync")
_FORMATTED_DIRS = ("core", "problems", "scripts")


def run_fix() -> int:
    return max(
        _run(*_UV_RUN, "ruff", "format", "."),
        _run(*_UV_RUN, "dprint", "fmt"),
        _run(
            "find",
            *_FORMATTED_DIRS,
            "-name",
            "*.[ch]",
            "-exec",
            *_UV_RUN,
            "clang-format",
            "-i",
            "{}",
            "+",
        ),
        _run(*_UV_RUN, "shfmt", "-w", *_FORMATTED_DIRS),
    )


def _run(*command: str) -> int:
    return subprocess.run(command, check=False).returncode
