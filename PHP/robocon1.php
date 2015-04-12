<?php
$robocon1 = $_GET['control'];
mysql_connect('localhost','root','');
mysql_select_db('home');
$sql="UPDATE mars set robo1='$robocon1' where id=1";
mysql_query($sql);
header ('Location: robo1.php');
?>