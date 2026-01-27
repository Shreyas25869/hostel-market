const body = document.querySelector("body");
const btn = document.querySelector(".circle");
const icon = document.querySelector(".btn_icon");

//to save the light mode use the object "local storage".

//function that stores the value true if the dark mode is activated or false if it's not.
function store(value) {
  localStorage.setItem("lightmode", value);
}

//function that indicates if the "lightmode" property exists. It loads the page as we had left it.
function load() {
  const lightmode = localStorage.getItem("lightmode");

  //if the light mode was never activated
  if (!lightmode) {
    store(false);
    icon.classList.add("fa-moon");
  } else if (lightmode == "true") {
    //if the light mode is activated
    body.classList.add("lightmode");
    icon.classList.add("fa-sun");
    icon.classList.remove("fa-moon");
  } else if (lightmode == "false") {
    //if the dark mode exists but is disabled
    icon.classList.add("fa-moon");
  }
}

load();

btn.addEventListener("click", () => {
  body.classList.toggle("lightmode");
  icon.classList.add("animated");

  //save true or false
  store(body.classList.contains("lightmode"));

  if (body.classList.contains("lightmode")) {
    icon.classList.remove("fa-moon");
    icon.classList.add("fa-sun");
  } else {
    icon.classList.remove("fa-sun");
    icon.classList.add("fa-moon");
  }

  setTimeout(() => {
    icon.classList.remove("animated");
  }, 500);
});
