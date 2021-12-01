<?php
require_once "connection.php";

if (isset($_REQUEST["delete"])) {
    $sql = "DELETE FROM abc12users WHERE id = ?";
    $stmt = $conn->prepare($sql);
    if ($stmt) {
        $stmt->bind_param("i", $id);
        $id = $_REQUEST["id"];
        $stmt->execute();
        echo "Record deleted successfully";
        echo '<a href="index.php">Show All</a>';
    } else {
        echo "Error deleting record: " . $conn->error;
    }
    $stmt->close();
    $conn->close();
}
