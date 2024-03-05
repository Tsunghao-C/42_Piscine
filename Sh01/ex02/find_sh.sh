find . -type f -name '*.sh' | sed 's#.*/##' | sed 's/.sh$//'
#sed is stream editor, you can use ! or # as separator instead of '/'
#first parse out the root and then part the .sh in the end
