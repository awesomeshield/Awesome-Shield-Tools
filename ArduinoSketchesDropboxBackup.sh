#!/bin/bash

# backs up Arduino sketches to dropbox

### syncs the contents of the default Arduino Sketch directory
### to a subdirectory called 'Arduino Sketches' in your dropbox directory

### Note: directories configured to work on a Mac

rsync -r ~/Documents/Arduino/ ~/Dropbox/Arduino\ Sketches
