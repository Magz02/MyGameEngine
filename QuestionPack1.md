# Question pack 1

## What is the difference between git and github?
Git is a version control system that lets one manage their code, and store it in a repository, which is in a cloud. Github is a git-based repository hosting service that allows one to collaborate with others on their code, and manage it in a much more appealing manner, as git is mostly command line based, whereas github has a GUI.

## Name 3 benefits of a version control system:
1. Allows to keep track of changes, and who and when made them
2. Allows to revert to previous versions of the code in case something goes wrong
3. Allows for branching, which in turn allows for multiple versions of the program to exist and be developed at the same time.

## Name 3 alternatives to git:
1. Mercurial
2. Subversion
3. Fossil  

Source: https://www.computerwoche.de/article/2824380/3-gute-alternativen-zu-git.html

## Name 2 differences between git and other version control systems:
1. Git vs Subversion (SVN): SVN is centralized, so it relies on only one repository, whereas git is distributed, so it can have multiple repositories.
2. Git vs Mercurial: Easier to learn and use due to simpler command set, yet Git is more powerful.

## Name known issues related to game engines (Unreal, Unity) and version control systems:
1. File size - game engines have large files, which is a problem with e.g. git, as it supports a max of 100MB files.
2. Binary files - game engines use binary files, which are not easily mergeable, and can cause conflicts in the code.