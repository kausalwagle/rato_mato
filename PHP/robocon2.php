<?php
$robocon2 = $_GET['control'];
mysql_connect('localhost','root','');
mysql_select_db('home');
$sql="UPDATE mars set robo2='$robocon2' where id=1";
mysql_query($sql);
header('Location: robo2.php');
?>