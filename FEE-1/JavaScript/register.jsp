<!DOCTYPE html>
<html>
    <head>

    </head>
    <body>
        <script>
            function validate(){
                var num = document.myform.num.value;
                if(isNaN(num)){
                    document.getElementById("numloc").innerHTML = "Enter Numeric value only";
                    return false;
                }
                else{
                    return true;
                }
            }
        </script>
        <form name="myform" 
    </body>
</html>