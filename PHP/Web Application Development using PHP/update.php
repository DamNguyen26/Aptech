<?php
require_once "connection.php";

if (isset($_REQUEST["update"])) {
    $sql = "UPDATE abc12users SET USERNAME = ?, PHONE = ? WHERE ID = ?";
    $stmt = $conn->prepare($sql);
    if ($stmt) {
        $stmt->bind_param("ssi", $userName, $phoneNumber, $id);
        $userName = $_POST["userName"];
        $phoneNumber = $_POST["phoneNumber"];
        $id = $_REQUEST["id"];
        $stmt->execute();
        echo "Record updated successfully";
        echo '<a href="index.php">Show All</a>';
    } else {
        echo "Error updating record: " . $conn->error;
    }
    $stmt->close();
    $conn->close();
}
