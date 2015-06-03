$username = "root";
$passwd = "12345";
$dbname = "minishop";

$minishop = mysqli_connect("127.0.0.1", $username, $passwd, $dbname);
if ($_POST["login"] and $_POST["password"] and $_POST["submit"] == "Connect")
{
	$req = "SELECT * FROM User";
	$result = $minishop->query($req);
	while ($row = $result->fetch_assoc()) {
		if ($row["login"] == $_POST["login"]) {
			echo "Login already exist";
			$minishop->close();
			exit ;
		}
	}
	$sql = 'INSERT INTO User (login, passwd) VALUE ($_POST["login"], $_POST["passwd"])';
	echo "Account succefully created\n";
}
$minishop->close();