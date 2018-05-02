ifconfig | grep "ether*" | grep -v 'media' |tr -d ' ' | tr -d '\t' | cut -c 6-42
