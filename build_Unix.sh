#rm -rf bin
#mkdir build
cd build
cmake ..
#read -p "Effectuer un make clean o/n " reponse
echo "Voulez-vous effectuer MAKE CLEAN [o/n] ?"
read REP

case $REP in 	
	O|o)
        	echo "Make CLEAN"
		make clean
        	;;
	N|n|*)
                echo "Pas de Make CLEAN"
                ;;
esac

NBRP=$(cat /proc/cpuinfo | grep processor | wc -l)
echo "Nbre de coeurs à la compilation : " $NBRP
make install -j$NBRP
cd ..
chmod +x ./binaire-aux/siftpp_tgi.LINUX
chmod +x ./binaire-aux/ann_mec_filtre.LINUX

