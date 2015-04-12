<?php
function connection(){
	$conn = mysqli_connect('localhost','root','','home');
	return $conn;
}
?>