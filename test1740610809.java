<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html" charset="utf-8">
<title>用户登录</title>
<style>
body{font-size:12px;}
</style>
</head>
<body>
<div id="login">
<form id="form1" name="form1" method="post" action="check.jsp">
<fieldset>
<legend>用户登录</legend>
<p>用户：<input type="text" name="name" value="666"></p>
<p>密码：<input type="password" name="pass"></p>
<p>
<input type="radio" name="select" value="manager" checked>系统管理员
<input type="radio" name="select" value="user">普通用户
</p>
<input type="submit" value="登录"/>
<input type="reset" value="重填"/>
</fieldset>
</form>
</div>
</body>
</html>