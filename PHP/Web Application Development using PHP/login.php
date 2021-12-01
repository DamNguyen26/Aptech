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
<?php
if (isset($_REQUEST["login"])) {
    $sql = "SELECT USERNAME, PASSWORD_HASH FROM abc12users WHERE USERNAME = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param('s',  $userName);

    $userName = $_POST["userName"];
    $password = $_POST["password"];
    $stmt->execute();
    $stmt->bind_result($userName, $password);
    $row = $stmt->fetch();
    if (!empty($row)){
        if (password_verify($password, $row["PASSWORD_HASH"])) {
            echo "success";
//                session_regenerate_id();
            $_SESSION['loggedin'] = TRUE;
            header('Location: index.php');
        } else {
            echo '<script language="javascript">alert("Invalid username or password!"); window.location="formLogin.php";</script>';
            session_destroy();
        }
    }else {
        echo "This User Name does not exist";
    }
    $stmt->close();
    $conn->close();
}
?>
</body>

</html>