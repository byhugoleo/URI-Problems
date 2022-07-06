<?php
    $pi = 3.14159;
    $r = fgets(STDIN);
    print "A=" . number_format(round($pi * $r * $r, 4), 4, '.', '') . "\n";
?>