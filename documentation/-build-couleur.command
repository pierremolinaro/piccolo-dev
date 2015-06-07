#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-macosx && python build.py &&
PATH=$DIR/../makefile-macosx:$PATH &&
cd $DIR &&
rm -f piccolo-couleur.pdf &&
#--- First pass
/usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{piccolo.tex}' &&
touch ref.idx &&
#touch ref.lof &&
#touch ref.lot &&
#touch ref.prgm-spice &&
touch ref.toc &&
iteration=0 &&
while [ `cmp -s ref.idx piccolo.idx ; echo $?` -ne 0 ] \
    || [ `cmp -s ref.toc piccolo.toc ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lot piccolo.lot ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.prgm-spice piccolo.prgm-spice ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lof piccolo.lof ; echo $?` -ne 0 ]
do
  cp piccolo.idx ref.idx &&
#  cp piccolo.lof ref.lof &&
#  cp piccolo.lot ref.lot &&
#  cp piccolo.prgm-spice ref.prgm-spice &&
  cp piccolo.toc ref.toc &&
  /usr/texbin/makeindex -s $DIR/fichiers-inclus/style-indexes.ist piccolo.idx &&
  /usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{piccolo.tex}' &&
  iteration=$((iteration+=1))
done &&
cp piccolo.pdf piccolo-couleur.pdf &&
echo "---------------- SUCCES $iteration iterations"
