import datetime
import random

memory = {}
user_name = ""

quotes = [
    "Believe in yourself!",
    "Success comes from hard work.",
    "Never stop learning.",
    "Dream big and work hard."
]

def calculator(text):
    try:
        words = text.split()
        nums = [float(w) for w in words if w.replace('.', '', 1).isdigit()]
        if "add" in text:
            return f"Answer = {nums[0] + nums[1]}"
        elif "subtract" in text:
            return f"Answer = {nums[0] - nums[1]}"
        elif "multiply" in text:
            return f"Answer = {nums[0] * nums[1]}"
        elif "divide" in text:
            return f"Answer = {nums[0] / nums[1]}"
    except:
        return "Please provide two numbers."

def chatbot(user_input):
    global user_name, memory
    text = user_input.lower()

    # Greetings
    if "hello" in text or "hi" in text:
        if user_name:
            return f"Hello {user_name}! How can I help you?"
        return "Hello! What's your name?"

    # Name memory
    elif "my name is" in text:
        user_name = user_input.replace("my name is", "").strip().title()
        return f"Nice to meet you, {user_name} 😊"

    # Ask name
    elif "what is my name" in text:
        return f"Your name is {user_name}" if user_name else "I don't know your name yet."

    # Date & time
    elif "time" in text:
        return datetime.datetime.now().strftime("Time: %H:%M:%S")

    elif "date" in text:
        return datetime.datetime.now().strftime("Date: %d-%m-%Y")

    # Calculator
    elif any(word in text for word in ["add", "subtract", "multiply", "divide"]):
        return calculator(text)

    # Motivation
    elif "motivate" in text or "quote" in text:
        return random.choice(quotes)

    # Weather (basic AI)
    elif "weather" in text:
        return "I can't check live weather yet, but I hope it's good 😊"

    # Learning new answers
    elif text.startswith("learn"):
        try:
            _, question, answer = user_input.split("|")
            memory[question.lower().strip()] = answer.strip()
            return "I have learned something new!"
        except:
            return "Use format: learn | question | answer"

    # Use learned memory
    elif text in memory:
        return memory[text]

    # Exit
    elif "bye" in text or "exit" in text:
        return "Goodbye! See you soon 👋"

    # Default
    else:
        return "I'm still learning. Can you teach me? 😊"

# Main program
print("🤖 Smart AI Chatbot (type 'bye' to exit)")

while True:
    user_input = input("You: ")
    reply = chatbot(user_input)
    print("Bot:", reply)

    if "bye" in user_input.lower() or "exit" in user_input.lower():
        break
