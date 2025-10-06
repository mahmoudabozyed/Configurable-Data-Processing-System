# Configurable Data Processing System in C++

A sophisticated C++ application designed to demonstrate core C++ concepts through a dynamic and extensible data processing system. The system processes different types of data based on user-provided configuration files, showcasing object-oriented design, STL, templates, and robust error handling.

## 🚀 Features

- **Dynamic Configuration Parsing**:  
  Reads and parses text-based configuration files with support for nested structures using dot notation.

- **Processor Abstraction**:  
  Uses an abstract base class `Processor` with derived classes for text, numeric, image, and audio processing.

- **Factory Design Pattern**:  
  Implements `ProcessorFactory` to dynamically instantiate processor objects at runtime.

- **Template-Based Processing**:  
  Leverages C++ templates for generic data processing.

- **Exception Handling**:  
  Robust error handling for invalid configurations, missing files, and unsupported processor types.

## 📁 Project Structure

```
ConfigurableProcessor/
├── include/
│   ├── Processor.hpp
│   ├── ProcessorFactory.hpp
│   ├── Configuration.hpp
│   └── Utilities.hpp
├── src/
│   ├── Processor.cpp
│   ├── ProcessorFactory.cpp
│   ├── Configuration.cpp
│   └── main.cpp
├── config/
│   └── settings.txt
└── Makefile
```

## 🛠️ Build Instructions

### Prerequisites
- GCC (supporting C++11 or later)
- Make

### Steps
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/configurable-data-processor.git
   cd configurable-data-processor
   ```

2. Build the project:
   ```bash
   make
   ```

3. Run the executable:
   ```bash
   ./main
   ```

## ⚙️ Configuration

Create a `settings.txt` file in the `config/` directory. Example:

```
Processor.Options.Type=Image
Processor.Options.Threshold=0.5
Processor.Options.MaxRetries=3
```

## 🧪 Example Execution

**Configuration:**
```
Processor.Options.Type=Image
Processor.Options.Quality=High
```

**Output:**
```
ImageProcessor processing: Sample Data (interpreted as image data)
```

## 🎯 Learning Objectives

- Master core C++ concepts: OOP, STL, templates, file handling, and exceptions
- Apply the Factory Design Pattern
- Develop modular and maintainable C++ applications
- Implement robust error handling mechanisms

## 📌 Evaluation Criteria

- Correctness of configuration parsing and processor creation
- Effective use of OOP, STL, templates, and exception handling
- Code modularity, readability, and documentation
- Creativity and innovation in extending the system

---
