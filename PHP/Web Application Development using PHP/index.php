<!DOCTYPE html>
<html>

<head>
    <?php require_once "connection.php"; ?>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        table,
        th,
        td {
            border: 1px solid black;
        }
    </style>
</head>

<body>
<?php
$sql = "SELECT ID, USERNAME, PHONE FROM abc12users";
$stmt = $conn->prepare($sql);
$stmt->bind_result($id, $userName, $phoneNumber);
$stmt->execute();
$stmt->store_result();

if ($stmt->num_rows > 0) {
    echo "<table>";
    echo "<theader>";
    echo "<tr>";
    echo "<th>Id</th>";
    echo "<th>User Name</th>";
    echo "<th>Phone Number</th>";
    echo "<th>Edit</th>";
    echo "<th>Delete</th>";
    echo '<th><a href="formRegistration.php">Create New</a></th>';
    echo '<th><a href="formSearch.php">Search By User Name</a></th>';
    echo "</tr>";
    echo "</theader>";
    echo "<tbody>";
    // output data of each row
    while ($stmt->fetch()) {
        echo "<tr>";
        echo "<td>" . $id . "</td>";
        echo "<td>" . $userName . "</td>";
        echo "<td>" . $phoneNumber . "</td>";
        echo '<td><form action="formUpdate.php" method="post"><input type="hidden" name = "id" value =' .
            $id .
            '><input type = "submit" value="Edit" name = "update"></form></td>';
        echo '<td><form action="delete.php" method="post"><input type="hidden" name = "id" value =' .
            $id .
            '><input type = "submit" value="Delete" name = "delete"></form></td>';
        echo "</tr>";
    }
    echo "</tbody>";
    echo "</table>";
} else {
    echo "0 results";
    echo '<a href="formRegistration.php">Create New</a>';
}
$stmt->close();
$conn->close();
?>
</body>

</html>