#!/bin/sh
DIR=`dirname $0` &&
{ 
  for source in $DIR/../picker/generatedDefinitions_8_10/pic18/PIC18*.piccoloDevice
  do
    base=`basename "$source"`
    base2=`echo "$base" | sed 's/PIC18/18/g'`
    target="$DIR/deviceDefinitions/$base2"
    if [ ! -e "$target" ]; then
      echo COPY `basename "$source"` "->" "$base2"
      cp "$source" "$target"
    else
      cmp --quiet "$target" "$source" || {
        echo COPY `basename "$source"` "->" "$base2"
        cp "$source" "$target"
      }
    fi
  done
} &&
echo "-------------- SUCCES ---------------" ||
echo "-------------- ECHEC ----------------"
