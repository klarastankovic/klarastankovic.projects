/* gumb prem gore */
var top_button=document.getElementById("topbutton");

window.onscroll=function() {scrollFunction()};

/* scroll funkcija */
function scrollFunction() 
{
	if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20)
	{
		top_button.style.display="block";
	}
	else
	{
		top_button.style.display="none";
	}
	if (document.body.scrollTop > 80 || document.documentElement > 80)
	{
		document.getElementById("navbar").style.padding="10px 10px";
		document.getElementById("logo").style.fontSize="20px";
	}
	else
	{
		document.getElementById("navbar").style.padding="10px 10px";
		document.getElementById("logo").style.fontSize="20px";
	}
}

function topFunction()
{
	document.body.scrollTop=0;
	document.documentElement.scrollTop=0;
}

/* navigacijska traka */
function myFunction()
{
	var x=document.getElementById("navbar-right");
	if (x.style.display==="block")
	{
		x.style.display="none";
	}
	else
	{
		x.style.display="block";
	}
}


/* treca, cetvrta i peta stranica */
let slideIndex = 1;
showSlides(slideIndex);

function plusSlides(n)
{
  showSlides(slideIndex += n);
}

function currentSlide(n)
{
  showSlides(slideIndex = n);
}

function showSlides(n)
{
  let i;
  let slides = document.getElementsByClassName("mySlides");
  let dots = document.getElementsByClassName("dot");
  if (n > slides.length)
	{
		slideIndex = 1
	}
  if (n < 1)
	{
		slideIndex = slides.length
	}
  for (i=0;i<slides.length;i++)
	{
		slides[i].style.display = "none";  
	}
  for (i=0;i<dots.length;i++)
	{
		dots[i].className = dots[i].className.replace(" active", "");
	}
  slides[slideIndex-1].style.display = "block";  
  dots[slideIndex-1].className += " active";
}
