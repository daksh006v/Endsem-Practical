document.getElementById("displayArea").textContent = localStorage.getItem("myText") || "";

        document.getElementById("saveBtn").addEventListener("click", function() {
            const text = document.getElementById("textInput").value;

            localStorage.setItem("myText", text);

            document.getElementById("displayArea").textContent = text;

            document.getElementById("textInput").value = "";
        });