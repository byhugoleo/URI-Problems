<?php
    $input = fopen('code.in', 'r');
    $x = fgets(STDIN);
    $y = fgets(STDIN);
    $z = fgets(STDIN);

    $average = ($x * 2.0 + $y * 3.0 + $z * 5.0) / 10.0;
    print 'MEDIA = ' . number_format($average, 1) . "\n";
?>