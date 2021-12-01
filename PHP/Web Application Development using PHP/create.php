<?php
require_once "connection.php";

if (isset($_REQUEST["create"])) {
    $sql = "INSERT INTO abc12users (USERNAME, PHONE, PASSWORD_HASH) VALUES (?, ?, ?)";
    $stmt = $conn->prepare($sql);
    if ($stmt) {
        $stmt->bind_param("sss", $userName, $phoneNumber, $password);
        $userName = $_POST["username"];
        $pass = $_POST["password"];
        $passwordHashed = password_hash($pass, PASSWORD_DEFAULT);
        $password = $passwordHashed;
        $phoneNumber = $_POST["phoneNumber"];
        $stmt->execute();
        echo "New records created successfully";
        echo '<a href="index.php">Show all</a>';
    } else {
        echo "Error creating record: " . $conn->error;
    }
    $stmt->close();
    $conn->close();
}
