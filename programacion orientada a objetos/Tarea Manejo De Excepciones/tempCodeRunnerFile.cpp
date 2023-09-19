#include <iostream>
#include <exception>

class InvalidConfigurationException : public std::exception {
public:
  InvalidConfigurationException(const std::string& param_name, const int param_value) noexcept {
    message_ = "Invalid " + param_name + " value " + std::to_string(param_value);
  }

  const char* what() const noexcept override {
    return message_.c_str();
  }

private:
  std::string message_;
};

class InvalidOptionException : public std::exception {
public:
  InvalidOptionException() noexcept {
    message_ = "Invalid option, please press C to continue next turn or E to end the game.";
  }

  const char* what() const noexcept override {
    return message_.c_str();
  }

private:
  std::string message_;
};

int main() {
  try {
    // Initialize the game with invalid parameters.
    throw InvalidConfigurationException("tiles", -30);
  } catch (InvalidConfigurationException e) {
    // Print an error message.
    std::cout << e.what() << std::endl;
    return 1;
  }

  try {
    // Get the user's input.
    std::string input;
    std::cin >> input;

    // Check if the input is valid.
    if (input != "C" && input != "E") {
      throw InvalidOptionException();
    }
  } catch (InvalidOptionException e) {
    // Allow the user to retry entering a valid option.
    std::cout << "Invalid option, please try again." << std::endl;
    return 1;
  }

  return 0;
}
