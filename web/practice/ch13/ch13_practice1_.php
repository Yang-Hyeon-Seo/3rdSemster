<!DOCTYPE html>
<html>
    <head>
        <meta charset = "UFT-8">
        <title>PHP</title>
</head>
<body>
    <p>PHP요일 확인 예제</p>
    <?php
    $week_day = date("D");
    print"<strong>Today is $week_day..</strong><br/>";
    if($week_day == "Fri")
        print"[$week_day] Have a nice weekend!";
    elseif($week_day == "Sun")
        print"[$week_day] Have a nice Sunday!";
    else
        print"[$week_day] Have a nice day!";
        ?>
        </body>
        </html>