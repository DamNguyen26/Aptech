<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
<form action="create.php" method="post">
    <label for="registrationForm">Registration form</label><br>
    <label for="username">UserName:</label>
    <input type="text" name="username" required><br>

    <label for="password">Password:</label>
    <input type="password" name="password" required><br>

    <label for="phoneNumber">Phone Number:</label>
    <input type="text" name="phoneNumber" required><br><br>

    <input type="submit" name="create" value="Registration">
</form>
</body>

</html>
