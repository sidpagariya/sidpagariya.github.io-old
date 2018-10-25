<?php
 
$fileList = glob('./*');
foreach($fileList as $filename){
    //Use the is_file function to make sure that it is not a directory.
    if(is_file($filename)){
        echo '<a href="'.$filename.'">'.$filename.'</a>';
		echo '<br>'; 
    }   
}
