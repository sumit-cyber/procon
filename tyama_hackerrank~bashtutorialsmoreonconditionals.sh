sort -n|awk '{n[FNR]=$1} END{if(n[1]==n[2]&&n[2]==n[3])printf("EQUILATERAL\n");else if(n[1]==n[2]||n[2]==n[3])printf("ISOSCELES");else printf("SCALENE\n")}'