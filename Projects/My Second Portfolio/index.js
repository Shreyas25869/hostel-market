document.querySelector(".cross").style.display = 'none';
document.querySelector(".hamburger").addEventListener('click',() => {
    document.querySelector(".sidebar").classList.toggle('sidebarGo');
    if(document.querySelector(".sidebar").classList.contains('sidebarGo')){
        setTimeout(() => {
            document.querySelector(".ham").style.display = "inline";
        }, 150);
        document.querySelector(".cross").style.display = "none";
    }else{
        setTimeout(() => {
            document.querySelector(".cross").style.display = "inline";
        },300);
        document.querySelector(".ham").style.display = "none";
    }
})
