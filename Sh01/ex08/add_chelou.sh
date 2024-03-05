## Declare global variables
#nb1="\\'?\"\\\"'\\"
#nb1="\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\""
nb1="$FT_NBR1"
#nb2="rcrdmddd"
#nb2="dcrcmcmooododmrrrmorcmcrmomo"
nb2="$FT_NBR2"
base1="'\\\"?!"
base2="mrdoc"
base3="gtaio luSnemf"
# Calculate the lenth of nb1, nb2 and base
len_base_1=${#base1}
len_base_2=${#base2}
len_base_3=${#base3}
len1=${#nb1}
len2=${#nb2}
# Create a function that return the index in a given base
get_char_index(){
	str="$1"
	tar_char="$2"
	index=-1
	ind=0
	while [ $ind -lt $len_base_1 ]; do
		curr_char="${str:ind:1}"
		if [ "$curr_char" = "$tar_char" ]; then
			index=$ind
			break
		fi
		((ind++))
	done
	echo $index
}
# Calculate decimal number of NBR1
# Use bc to do string calculations to deal with big numbers (>19 digit)
i=0
dec_n1=0
while [ $i -lt $len1 ]; do
	char="${nb1:i:1}"
	base_ind=$(get_char_index "$base1" "$char")
	dec_n1=$(echo "$dec_n1 * $len_base_1 + $base_ind" | bc)
	#echo "dec_n1 in $i is $dec_n1, char: $char, base_ind: $base_ind"
	((i++))
done
# Calculate decimal number of NBR2
j=0
dec_n2=0
while [ $j -lt $len2 ]; do
	char="${nb2:j:1}"
	base_ind=$(get_char_index "$base2" "$char")
	dec_n2=$(echo "$dec_n2 * $len_base_2 + $base_ind" | bc)
	#echo "dec_n2 in $j is $dec_n2, char: $char, base_ind: $base_ind"
	((j++))
done
dec_t=$(echo "$dec_n1 + $dec_n2" | bc)
# Use a buffer to save the put_nbr_base in a reverse order
# Need to use bc to deal with big str calculation and boolean statement
buf=""
while [ $(echo "$dec_t - $len_base_3 >= 0" | bc) -eq 1 ]; do
	buf+="${base3:$(echo "$dec_t % $len_base_3" | bc):1}"
	dec_t=$(echo "$dec_t / $len_base_3" | bc)
done
buf+="${base3:$dec_t:1}"
echo "$buf" | rev
