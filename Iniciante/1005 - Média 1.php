<?php
    // $input = fopen('code.in', 'r');
    $x = fgets(STDIN);
    $y = fgets(STDIN);

    $average = ($x * 3.5 + $y * 7.5) / 11.0;
    print 'MEDIA = ' . number_format($average, 5) . "\n";
?>