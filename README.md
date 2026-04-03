# dsa

A structured system for mastering algorithms and data structures through fundamental implementations and deliberate problem solving.

## Philosophy

This repository documents the continuous refinement of problem-solving ability.

Every solution is versioned.  
Every problem is a unit of deliberate practice.  
Selected solutions are elevated when they demonstrate reusable techniques or non-trivial insight.

The objective is not volume — it is technical maturity.

## Structure

- `core/` - Fundamental data structures and algorithms
- `docs/` - Structured documentation and references
- `problems/` - All solved problems, organized by source
- `showcase/` - Solutions that demonstrate strong techniques or patterns

## Rules

- One problem per commit
- No mass commits
- Explicit over clever
- Refactor only when insight improves
- Showcase only when justified

## Workflow

For each problem:

1. Create a dedicated directory
2. Place the solution file inside
3. Place the analysis file inside
4. Add the original problem link at the top of the file
5. Commit with: `feat: add solution to <problem-id>`

If the solution reveals a reusable technique, promote it to `showcase/`.

## Languages

- Python

## Purpose

To build durable reasoning skill through:

- Algorithmic rigor
- Pattern extraction
- Controlled iteration
- Technical clarity

This is a long-term repository.

## Run

```bash
git clone https://github.com/geldois/dsa.git
cd dsa
python3 -m venv .venv
source .venv/bin/activate
pip install ruff
```
