#!/bin/sh
set -x
#-------------------- Aller dans le repertoire du fichier de commande
cd `dirname $0`
#-------------------- Desassembler l'exemple
/usr/local/gputils/0.13.5/bin/gpdasm -p 18F448 relative_branch_limits.hex
