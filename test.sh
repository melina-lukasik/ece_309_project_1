#!/bin/bash

echo "Starting the automated test for 'harness'..."
echo "------------------------------------------"

# The <<EOF tells Bash to feed everything until the next 'EOF' into the program
./harness <<EOF
hello
this is just some gibberish
sdlkfjsdlkfjsdf
exit
EOF

echo "------------------------------------------"
echo "Test complete!"