function start() {
    if (document.cookie == "")
        return;
    var cArr = document.cookie.split(";");
    var str = "";
    for (var i = 0; i < cArr.length; i++) {
        var vArr = cArr[i].split('=');
        var name = vArr[0];
        var value = vArr[1];
        str += name + ": " + value + "\n";
    }

    document.frmRd.txtCookie.value = str;
}

function set() {
    if (document.frmSet.clerk.value == "") {
        alert("go to Set");
        return;
    }
    var now = new Date();
    now.setMonth(now.getMonth() + 1);
    
    document.cookie = "name=" + document.frmSet.clerk.value;
    //document.cookie = "expires=" + now.toLocaleString() + ";";
    //document.cookie = "age=18";
    //document.cookie = "expires=" + new Date().toLocaleString() + ";";
    alert("Set Done!")
}
function del() {
    if (document.frmDel.clerk.value == "") {
        alert("go to Set");
        return;
    }
    var now = new Date();
    now.setMonth(now.getMonth() - 1);
    var cookievalue = document.frmDel.clerk.value + ";";
    document.cookie = "name=" + cookievalue;
    document.cookie = "expires=" + now.toLocaleString() + ";"
    alert("Del Done!")

}
function read() {
    start();
}