#!/bin/sh

git ls-files --others --ignored --exclude-standard
find . -type f \(-name '*~' -o -name '#*#' \) -exec rm -v {}\;

exit 0 
