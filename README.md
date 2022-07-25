# network_status_p

This is a simple Flutter plugin for detecting network status. It provides a status bar which automatically updates depending on the whether the network is on or off. 

## Getting Started

In order to use the package, you need to add dependency to your project:
```
  dependencies:
    network_status_p: ^0.0.1
```

In source code, include the following:
```
  import 'package:network_status_p/network_status_p.dart';
```

## Usage
You can either use `NetChecker()` or with a parameter `NetChecker(Duration(seconds: 2))` which specifies the interval of checking network status.
If no parameter is given, the default duration is 1 seconds.

## Example
