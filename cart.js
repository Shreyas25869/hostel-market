let cart = JSON.parse(localStorage.getItem("cart")) || {};

function renderCart() {
  const container = document.getElementById("cart-items");
  container.innerHTML = "";

  let total = 0;
  let itemCount = 0;

  // ✅ Empty cart check (STOP here)
  if (Object.keys(cart).length === 0) {
    container.innerHTML = "<p>Your cart is empty.</p>";
    document.getElementById("total-price").innerText = "0";
    document.getElementById("item-count").innerText = "0";
    return;
  }

  for (let id in cart) {
    const item = cart[id];
    item.price = String(item.price).replace("₹", "").trim();

    total += Number(item.price) * Number(item.qty);
    itemCount += Number(item.qty);
    console.log(item);

    container.innerHTML += `
      <div class="cart-item">
        <img
          src="${item.image}"
          alt="${item.alt || item.name}"
        >

        <div class="cart-info">
          <h4>${item.name}</h4>
          <p>₹${item.price}</p>

          <div class="cart-qty">
            <button onclick="${item.qty == 1 ? `removeItem('${id}')` : `changeQty('${id}', -1)`}">
              <i class="fa-solid ${item.qty == 1 ? 'fa-trash' : 'fa-minus'}"></i>
            </button>
            <span>${item.qty}</span>
            <button onclick="changeQty('${id}', 1)">+</button>
          </div>
        </div>
      </div>
    `;
  }

  document.getElementById("total-price").innerText = total;
  document.getElementById("item-count").innerText = itemCount;
}


function changeQty(id, change) {
  if (!cart[id]) return;

  cart[id].qty = parseInt(cart[id].qty) + change;

  if (cart[id].qty <= 0) {
    delete cart[id];
  }

  localStorage.setItem("cart", JSON.stringify(cart));
  renderCart();
}

function removeItem(id) {
  delete cart[id];
  localStorage.setItem("cart", JSON.stringify(cart));

  // If cart is empty, show empty message
  if (Object.keys(cart).length === 0) {
    document.getElementById("cart-items").innerHTML =
      "<p>Your cart is empty.</p>";

    document.getElementById("total-price").innerText = "0";
    document.getElementById("item-count").innerText = "0";
    return;
  }

  renderCart();
}

function checkout() {
  let msg = "Order Details:%0A";
  let total = 0;

  for (let id in cart) {
    const item = cart[id];
    msg += `${item.name} x ${item.qty}  =  ₹${item.price * item.qty}%0A`;
    total += Number(item.price) * Number(item.qty);
  }

  msg += `%0ATotal: ₹${total}`;
  window.open(`https://wa.me/919519171931?text=${msg}`, "_blank");
}

renderCart();