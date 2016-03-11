
function padvalue() {
    var allcookie = document.cookie;
    var arr = allcookie.split(';');
    var valueArr = arr[0].split('=');
    //var value = unescape(valueArr[1]);
    var value = valueArr[1];
    document.myform.customer.value = value;
}


function WriteCookie() {



    if (document.myform.customer.value == "") {
        alert("Enter some value!");
        return;
    }
    //var cookievalue = escape(document.myform.customer.value) + ";";
    var cookievalue = document.myform.customer.value + ";";

    //ReadCookie();
    document.cookie = "name=" + cookievalue;
    document.write("Setting Cookies: " + "name = " + document.myform.customer.value);

    // f();
}

function ReadCookie() {
    document.write('******<br/>');
    var allcookie = document.cookie;
    document.write("All Cookies : <br/>");
    // Get all the cookies pairs in an array
    cookiearray = allcookie.split(';');

    //Now take key value pair out of this array
    for (var i = 0; i < cookiearray.length; i++) {
        name = cookiearray[i].split('=')[0];
        //value = unescape(cookiearray[i].split('=')[1]);
        value = cookiearray[i].split('=')[1];

        document.write('Key is : ' + name + ' and Value is : ' + value + "<br/>");
    }
    document.writeln('******<br/>');

}