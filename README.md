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
- Rust — planned

## Setup

### On Linux

```bash
git clone https://github.com/geldois/dsa.git
cd dsa
python3 -m venv .venv && source .venv/bin/activate
pip install -e ".[dev]"
```

## Profiles

- GitHub: <https://github.com/geldois>
- LinkedIn: <https://linkedin.com/in/geldois>
- Codeforces: <https://codeforces.com/profile/geldois>
