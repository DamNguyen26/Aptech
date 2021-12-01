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
<form action="login.php" method="post">
    <label for="userName">UserName:</label><br>
    <input type="text" name="userName" required><br>

    <label for="password">Password:</label><br>
    <input type="password" name="password" required><br>

    <input type="checkbox" name="rememberMe" value=“yes">
    <label for="password">Remembered me!</label></checkbox><br>

    <input type="submit" name="login" value="Log in">
</form>
</body>

</html>