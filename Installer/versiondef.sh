MAJV=2
MINV=5
BUGV=0
RELV=0

echo creating installer for version $MAJV.$MINV.$BUGV.$RELV !
for i in *.skel ; do
  sed -e "s/_MAJV_/$MAJV/g" -e "s/_MINV_/$MINV/g" -e "s/_BUGV_/$BUGV/g" \
      -e "s/_RELV_/$RELV/g" $i > $(basename $i .skel) 
done

