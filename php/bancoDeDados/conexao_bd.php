<?php

$servidor = 'localhost'; //meu servidor web localhost
$usuario = 'root'; //usuário do mysql
$senha = ''; //senha
$bancoDados = 'curso_php'; //nome do banco de dados

$conexao = mysql_connect($servidor, $usuario, $senha, $bancoDados); //cria objeto do tipo mysqli com os parâmetros nessa ordem
                    //error number
if ($mysqli_connect_errno ($conexao)) { //testar se a conexão foi realizada com sucesso
    echo "Problemas para conectar no banco. Verifique os dados!"; //informa se acontecer algum erro
}
else {
    echo "Conexao realizada com sucesso!";
}
 
?>