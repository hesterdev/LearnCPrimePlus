var mon = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
var monAbbr = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"];
var now = new Date();

document.write(mon[now.getMonth()] + "<br/>");
document.write(monAbbr[now.getMonth()] + "<br/>");

document.write(now.getDay());