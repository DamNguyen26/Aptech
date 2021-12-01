<!DOCTYPE html>
<html lang="en">

<head>
    <?php require_once "connection.php"; ?>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
<?php if (isset($_REQUEST["update"])) {
    $sql = "SELECT ID, USERNAME, PHONE FROM abc12users WHERE ID = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("i", $id);
    $id = $_REQUEST["id"];
    $stmt->bind_result($id, $userName, $phoneNumber);
    $stmt->execute();
    $stmt->fetch();
    $stmt->close();
} ?>

<h2>Form Update</h2>

<form action="update.php" method="post">
    <label for="id">Id:</label><br>
    <input type="text" name="id" value="<?php if(isset($id)){echo $id;}?>" readonly><br>

    <label for="userName">First name:</label><br>
    <input type="text" name="userName" value="<?php if(isset($userName)){echo $userName;}?>"><br>

    <label for="phoneNumber">Last name:</label><br>
    <input type="text" name="phoneNumber" value="<?php if(isset($phoneNumber)){echo $phoneNumber;}?>"><br><br>

    <input type="submit" name="update" value="Submit">
</form>
</body>

</html>