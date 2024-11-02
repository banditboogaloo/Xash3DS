# Xash3D FWGS Engine - 3DS Fork

Originally created by [masterfeizz](https://github.com/masterfeizz), Xash3DS aims to port the Xash3D engine to the 3DS.

Since the original project has been abandoned, this fork aims to bring improvements and general updates.

## What changes are in this fork?
- Project structure: building the project from scratch is super easy, provided you have devkitPro set up.
- 3D support

## What changes are planned in this fork?
- Extensive mod support
- Performance and graphical improvements

# Building
This was tested only on Windows, I do not guarantee it working under Linux, but it in theory should.

## 0 - Requirements
- Clone the repository with all its submodules (downloading submodules is default git behavior, so dont worry about it).
- You must install [devkitPro](https://devkitpro.org/wiki/Getting_Started). It is enough to only select the 3ds tools.
- You must have some IDE, I personally just use VSCode.

## 1 - Building the submodules
The main instance requires 3 submodules to be compiled:
- mainui_3ds
- picaGL
- hlsdk_3ds

All of these have their own READMEs and repositories, but in a nutshell:
Launch `devkitPro/mysys2/mysys2.exe` and `cd` into each submodule (eg. cd `mainui_3ds`), then run `make`.
An example:
```bash
cd mainui_3ds
make
```

And you're done.

## 2 - Building and running the project
> Make sure all the submodules have been built in step 2.

Simply run `make` in the root directory to execute the build.

After the **Xash3DS.3dsx** and **Xash3DS.elf** files were built successfully, run `make cia` to create a CIA that you can then install on your 3DS.

## 3 - Cleaning project
You can run `make clean_submodules` in the root directory to clean ALL build files, including submodules. Simply run `make clean` to just clean the root project build files.

# Misc: Interesting observations about the original repository
- There are a lot of vulgar comments, dont blame me:)
- A bunch of cmake/makefiles were scattered all around with no purpose, now there's only one Makefile per project for clarity
- All required repositories were not documented anywhere, but I compiled them all into one conscise package
- hlsdk_3ds has client and server libs, however when building the client, the server folder MUST be cleaned (make clean), as the client references and builds server files too with additional changes (see classhacks.h, it was an astounding adventure)
