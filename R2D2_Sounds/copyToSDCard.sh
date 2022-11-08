ls MP3s/*.mp3 |  sort -n > files.txt
while read p; do
    cp "${p}" /Volumes/R2D2_SOUNDS/
done <files.txt
rm files.txt
