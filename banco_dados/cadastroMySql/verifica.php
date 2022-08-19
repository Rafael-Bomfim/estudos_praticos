<?php

$servidor = 'localhost'; //meu servidor web localhost
$usuario = 'root'; //usuário do mysql
$senha = ''; //senha
$bancoDados = 'curso_php'; //nome do banco de dados

$conexao = mysql_connect($servidor, $usuario, $senha, $bancoDados) or die(mysql_error()); //cria objeto do tipo mysqli com os parâmetros nessa ordem
        
mysql_select_db('curso_php', $conexao);
                    //error number
if ($mysqli_connect_errno ($conexao)) { //testar se a conexão foi realizada com sucesso
    echo "Problemas para conectar no banco. Verifique os dados!"; //informa se acontecer algum erro
}
else {
    echo "Conexao realizada com sucesso!";
}


$login = $_POST["login"]; //método POST envia o parametro login para a url do form, verifica.php
$senha = $_POST["senha"]; //esse login e senha é o name do input no html

$selecao = mysql_query("SELECT * FROM cadastro WHERE login = '$login' AND senha = '$senha' "); //executa uma colsulta na tabela informada. Seleciona todos os registron da tabela cadastro onde login = login, e senha = senha 

$row = mysql_fetch_array($selecao); //retorna a linha da consulta em selecao

if ($row == "") { //testar se a consulta retornou alguma coisa
    echo "<br>Login e/ou senha invalidos.</center>";
    echo "<br><br>";
    echo "Volte e tente novamente";
    exit;
}
else {
    echo "<br><br>Bem vindo(a) <b>$login</b>";
}
?>