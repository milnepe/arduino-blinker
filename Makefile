FQBN ?= arduino:avr:uno

PORT = /dev/ttyACM0

MAKE_DIR = $(PWD)

BUILD_DIR = $(MAKE_DIR)/build

LIB = $(MAKE_DIR)/src

SRC = $(MAKE_DIR)/examples/MyBlink

compile:
	arduino-cli compile --fqbn $(FQBN) --library $(LIB) --build-path $(BUILD_DIR) --build-cache-path $(BUILD_DIR) -v $(SRC)

upload: compile
	arduino-cli upload -p $(PORT) --fqbn $(FQBN) --input-dir $(BUILD_DIR) -v $(SRC)

clean:
	rm -Rf $(BUILD_DIR)
