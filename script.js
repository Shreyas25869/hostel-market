function changeQty(button, change) {
    const product = button.closest(".product");
    const qtySpan = product.querySelector(".qty");
    let qty = parseInt(qtySpan.innerText);
    
    qty += change;
    if (qty < 1) qty = 1;
    
    qtySpan.innerText = qty;
    
    // Update WhatsApp link
    const productName = product.querySelector("h2").innerText;
    const orderBtn = product.querySelector(".btn");
    const note = document.querySelector('.note-box').value;

    orderBtn.href =
      "https://wa.me/919519171931?text=" +
      encodeURIComponent(`Order :\n${productName}\nQty :  ${qty}\nRoom No :  ${note}`);
  }

let cart = [];                 // reset cart on every reload
localStorage.removeItem("cart"); // clear stored cart

updateCartCount();

function addToCart(btn) {
  const product = btn.closest(".product");
  const name = product.querySelector("h2").innerText;
  const price = product.querySelector(".new-price").innerText;
  const qty = product.querySelector(".qty").innerText;

  cart.push({ name, price, qty });

  localStorage.setItem("cart", JSON.stringify(cart));
  updateCartCount();

  btn.innerText = "Added ✔";
  setTimeout(() => btn.innerText = "Add to Cart", 1000);
}

function updateCartCount() {
  document.getElementById("cart-count").innerText = cart.length;
}
