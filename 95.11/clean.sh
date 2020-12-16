#1/bin/bash

# Removes every a.out from every subfolder where the 
# sript is executed;

# Set the filename;
file="a.out"

# Check the file if exist or not;
if [ -f ./**/"$file" ] 

# if exists in any folder then removes it;
	then
		rm -v ./**/"$file" 
		echo "everithing cleaned succesfully "

# also removes it if existes in the current directory;
elif [ -f "$file" ]
	then
		rm -v "$file"
		echo "everithing cleaned succesfully "

# if doesn't exist then does nothing;
else
		echo "everything seems clean "
		echo "there is nothing to do "
fi
