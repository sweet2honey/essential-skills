# Essential Skills
Curated, reusable **skills** packaged as a **Claude Code plugin** and portable to **GitHub Copilot** skill folders.


# Installation
## Claude Code (Plugin Marketplace)
```shell
/plugin marketplace add sweet2honey/essential-skills
/plugin install essential-skills@essential-skills
```

## GitHub Copilot / VS Code
Clone this repository, then copy all skills into either a workspace or global GitHub Copilot-aware folder.

### Workspace install
```shell
git clone https://github.com/sweet2honey/essential-skills.git
mkdir -p .github/skills
cp -R essential-skills/skills/* .github/skills/
```

### Global install
```shell
git clone https://github.com/sweet2honey/essential-skills.git
mkdir -p ~/.copilot/skills
cp -R essential-skills/skills/* ~/.copilot/skills/
```

These commands copy every skill in this repository, such as `code-study-roadmap` and `daily-word-card`, into a GitHub Copilot-aware folder.


# What's inside
1. **code-study-roadmap** - Generates a progressive roadmap to study and understand a codebase (ideas → usage → internals → quizzes), including Mermaid diagrams.
2. **daily-word-card** - Generates 2 to 4 compact study-card examples for an English word or short phrase, centered on everyday verb-object phrases with Chinese translations.
3. **cpp-standard-audit** - Analyzes C++ source for standard-compliance issues, undefined behavior, and cross-standard-version differences.