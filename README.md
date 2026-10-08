# dsa

A structured system for mastering algorithms and data structures.

## Philosophy

Every solution is a unit of deliberate practice. The objective is not volume — it is cognitive density.

- Explicit over clever
- Analysis inline as comments — no separate files
- Refactor only when understanding improves

## Structure

- `core/` — data structures and algorithms implemented from scratch, grouped by category (C)
- `problems/` — solved problems, `problems/<platform>/<id>_<slug>.<ext>` (Python, C)
- `scripts/` — the formatting command
- `buffers/` — unfinished work, dumped without mercy and never formatted: `buffers/<platform>-<id>-<slug>.<ext>`

A finished buffer moves to `problems/` with `git mv`. Its INSIGHT and COMPLEXITY go inline at the top, as comments.

## Setup

Prerequisites: [git](https://git-scm.com) and [uv](https://docs.astral.sh/uv/getting-started/installation/) (the project
requires exactly `0.11.21`). Every formatter is a pinned dev dependency installed by `uv sync`; nothing else is needed.

```bash
git clone https://github.com/geldois/dsa.git
cd dsa
uv sync
git config --local include.path ../.gitconfig
```

## Formatting

```bash
uv run python -m scripts fix
```

Formats the whole repo except `buffers/`, in place and idempotently:

| Files                   | Formatter      | Configuration                     |
| ----------------------- | -------------- | --------------------------------- |
| `.py`                   | `ruff format`  | `[tool.ruff]` in `pyproject.toml` |
| `.c`, `.h`              | `clang-format` | `.clang-format`                   |
| `.md`, `.json`, `.toml` | `dprint`       | `dprint.json`                     |
| `.sh`                   | `shfmt`        | `.editorconfig`                   |

There are no linters, tests or git hooks. A new file extension gets its formatter in `scripts/fix.py` first.

## Commits

[Conventional Commits](https://www.conventionalcommits.org), in English, one line.

| Commit                                          | Used for                                  |
| ----------------------------------------------- | ----------------------------------------- |
| `chore(buffer): <slug> <what changed>`          | any change to `buffers/`; never a release |
| `feat(<platform>): add solution to <id> <name>` | a problem promoted to `problems/`         |
| `feat(core): implement <structure>`             | a new structure or algorithm in `core/`   |
| `refactor(repo): <what>`                        | tooling, layout and conventions           |

Work happens on `dev`. `dev` is merged into `main` with a merge commit, so the buffer history stays grouped. See only
the meaningful history with:

```bash
git log --invert-grep --grep='^chore(buffer)'
```

## Profiles

- GitHub: <https://github.com/geldois>
- LinkedIn: <https://linkedin.com/in/geldois>
- Codeforces: <https://codeforces.com/profile/geldois>
