
#!/bin/sh
find . -name "*sh" | awk -F "/" '{print$NF}' | rev | cut -c4- | rev
