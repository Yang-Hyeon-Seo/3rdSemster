function time()
{
    var time = new Date();
    document.getElementById("now").innerHTML = time.getHour() + "시" + time.getMinutes() + "분";
    setInterval("time()", 1000);
}