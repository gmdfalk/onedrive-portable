# onedrive-portable

[![Build Status](https://travis-ci.org/mikar/onedrive-portable.svg?branch=master)](https://travis-ci.org/mikar/onedrive-portable)  

## About

This project is meant to be lightweight cross platform OneDrive client using the Qt framework and OneDrive's REST API.  
Due to the portable nature (using cross platform frameworks and HTTP) this project will be built from the start to potentially handle more than just OneDrive.  

The GUI will closely resemble that of OneDrive/Dropbox but the functionality will be reduced when it comes to explorer integration 
and improved when it comes to core synchronization features I think are important and/or missing from OneDrive/Dropbox.

Some goals i'd like to reach:  

* Support for Windows, Linux and macOS
* A single light and portable binary
* Basic configuration options like proxy and bandwidth settings
* Exclusions (think .gitignore, i.e. a way to completely ignore all files folders matching specified patterns)
* Stretch: Lazy Loading (think odrive, i.e. only synchronize those resources we need when we need them)
* Optional: Support for multiple OneDrive accounts and/or other cloud services like Dropbox
* Optional: Automatic application update

## Installation

## Usage

## Testing

[QFileSystemModel]: http://doc.qt.io/qt-5/qfilesystemmodel.html
