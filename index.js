function mostrarOcultar0() {
  var contenido0 = document.getElementById("menu_principal");
  var contenido1 = document.getElementById("sensor_luz");
  var contenido2 = document.getElementById("sensor_prox");
  var contenido3 = document.getElementById("sensor_hum");
  var contenido4 = document.getElementById("sensor_temp");
  
  if (contenido0.style.display === "none") {
    contenido0.style.display = "block";
    contenido1.style.display = "none";
    contenido2.style.display = "none";
    contenido3.style.display = "none";
    contenido4.style.display = "none";
  }
}

function mostrarOcultar1() {
  var contenido0 = document.getElementById("menu_principal");
  var contenido1 = document.getElementById("sensor_luz");
  var contenido2 = document.getElementById("sensor_prox");
  var contenido3 = document.getElementById("sensor_hum");
  var contenido4 = document.getElementById("sensor_temp");
  
  if (contenido1.style.display === "none") {
    contenido0.style.display = "none";
    contenido1.style.display = "block";
    contenido2.style.display = "none";
    contenido3.style.display = "none";
    contenido4.style.display = "none";
  } else {
    contenido0.style.display = "block";
    contenido1.style.display = "none";  }
}

function mostrarOcultar2() {
  var contenido0 = document.getElementById("menu_principal");
  var contenido1 = document.getElementById("sensor_luz");
  var contenido2 = document.getElementById("sensor_prox");
  var contenido3 = document.getElementById("sensor_hum");
  var contenido4 = document.getElementById("sensor_temp");
  
  if (contenido2.style.display === "none") {
    contenido0.style.display = "none";
    contenido1.style.display = "none";
    contenido2.style.display = "block";
    contenido3.style.display = "none";
    contenido4.style.display = "none";
  } else {
    contenido0.style.display = "block";
    contenido2.style.display = "none";  }
}

function mostrarOcultar3() {
  var contenido0 = document.getElementById("menu_principal");
  var contenido1 = document.getElementById("sensor_luz");
  var contenido2 = document.getElementById("sensor_prox");
  var contenido3 = document.getElementById("sensor_hum");
  var contenido4 = document.getElementById("sensor_temp");
  
  if (contenido3.style.display === "none") {
    contenido0.style.display = "none";
    contenido1.style.display = "none";
    contenido2.style.display = "none";
    contenido3.style.display = "block";
    contenido4.style.display = "none";
  } else {
    contenido0.style.display = "block";
    contenido3.style.display = "none";  }
}

function mostrarOcultar4() {
  var contenido0 = document.getElementById("menu_principal");
  var contenido1 = document.getElementById("sensor_luz");
  var contenido2 = document.getElementById("sensor_prox");
  var contenido3 = document.getElementById("sensor_hum");
  var contenido4 = document.getElementById("sensor_temp");
  
  if (contenido4.style.display === "none") {
    contenido0.style.display = "none";
    contenido1.style.display = "none";
    contenido2.style.display = "none";
    contenido3.style.display = "none";
    contenido4.style.display = "block";
  } else {
    contenido0.style.display = "block";
    contenido4.style.display = "none";  }
}






