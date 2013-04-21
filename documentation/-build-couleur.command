#!/bin/sh
set -x
DIR=`dirname $0` &&
PATH=/usr/texbin:$PATH &&
BUILD_DIR=piccolo-build-couleur &&
cd $DIR &&
rm -f piccolo-couleur.pdf &&
rm -fr $BUILD_DIR &&
mkdir $BUILD_DIR &&
#--- First pass
pdflatex --file-line-error -output-directory=$BUILD_DIR '\newcommand\afficherDetailSchema{false}\input{piccolo.tex}' &&
touch $BUILD_DIR/ref.idx &&
#touch $BUILD_DIR/ref.lof &&
#touch $BUILD_DIR/ref.lot &&
#touch $BUILD_DIR/ref.prgm-spice &&
touch $BUILD_DIR/ref.toc &&
iteration=0 &&
while [ `cmp -s $BUILD_DIR/ref.idx $BUILD_DIR/piccolo.idx ; echo $?` -ne 0 ] \
    || [ `cmp -s $BUILD_DIR/ref.toc $BUILD_DIR/piccolo.toc ; echo $?` -ne 0 ] \
#   || [ `cmp -s $BUILD_DIR/ref.lot $BUILD_DIR/piccolo.lot ; echo $?` -ne 0 ] \
#   || [ `cmp -s $BUILD_DIR/ref.prgm-spice $BUILD_DIR/piccolo.prgm-spice ; echo $?` -ne 0 ] \
#   || [ `cmp -s $BUILD_DIR/ref.lof $BUILD_DIR/piccolo.lof ; echo $?` -ne 0 ]
do
  cp $BUILD_DIR/piccolo.idx $BUILD_DIR/ref.idx &&
#  cp $BUILD_DIR/piccolo.lof $BUILD_DIR/ref.lof &&
#  cp $BUILD_DIR/piccolo.lot $BUILD_DIR/ref.lot &&
#  cp $BUILD_DIR/piccolo.prgm-spice $BUILD_DIR/ref.prgm-spice &&
  cp $BUILD_DIR/piccolo.toc $BUILD_DIR/ref.toc &&
  makeindex -s $DIR/fichiers-inclus/style-indexes.ist $BUILD_DIR/piccolo.idx &&
  pdflatex --file-line-error -output-directory=$BUILD_DIR '\newcommand\afficherDetailSchema{false}\input{piccolo.tex}' &&
  iteration=$((iteration+=1))
done &&
cp $BUILD_DIR/piccolo.pdf piccolo-couleur.pdf &&
rm -fr $BUILD_DIR &&
echo "---------------- SUCCES $iteration iterations"