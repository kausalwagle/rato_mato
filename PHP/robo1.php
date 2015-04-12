<?php
include ('connection.php');
$link = connection();
$sql = "select robo1 from mars";
$result = mysqli_query($link,$sql);
if(mysqli_num_rows($result)>0){
	while ($rows = mysqli_fetch_assoc($result)){
	echo json_encode($rows);
	}
}
?>