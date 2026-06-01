# dsa

A structured system for mastering algorithms and data structures.

## Philosophy

Every commit represents a unit of deliberate practice.
The objective is not volume — it is cognitive density.

## Structure

- `core/` — Data structure implementations from scratch
- `problems/` — Solved problems

## Rules

- Commit only when there is non-trivial insight
- No mass commits
- Explicit over clever
- Analysis inline as comments — no separate files
- Refactor only when understanding improves

## Workflow

For each structure in `core/`:

- Implement from scratch
- Commit with: `feat: implement <structure>`

For each problem in `problems/`:

- Document insight and complexity as inline comments
- Commit with: `feat: add solution to <problem-id>`

## Languages

- C
- Python

## Setup

### On Linux

```bash
git clone https://github.com/geldois/dsa.git
cd dsa
uv sync --group dev
uv run pre-commit install
```

## Profiles

- GitHub: <https://github.com/geldois>
- LinkedIn: <https://linkedin.com/in/geldois>

- Codeforces: <https://codeforces.com/profile/geldois>
