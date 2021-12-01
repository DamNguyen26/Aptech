<?php
require_once "connection.php";
$table = "abc12users";
$sql = "SHOW TABLES LIKE '".$table."'";

if ($conn->query($sql) -> num_rows == 1) {
    echo "Table abc12users EXISTS !";
}
else {
    $sql = "CREATE TABLE abc12users (
    ID INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    USERNAME VARCHAR(100) UNIQUE NOT NULL,
    PHONE VARCHAR(10) NOT NULL,
    PASSWORD_HASH CHAR(40) NOT NULL
    )";

    if ($conn->query($sql) === true) {
        echo "Table abc12users created successfully";
    } else {
        echo "Error creating table: " . $conn->error;
    }
}
$conn->close();