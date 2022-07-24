import 'dart:async';

import 'package:flutter/material.dart';
import 'dart:io';

class NetChecker extends StatefulWidget {
  const NetChecker({
    this.netDuration = const Duration(seconds: 1),
    Key? key,
  }) : super(key: key);

  final Duration netDuration;

  @override
  State<NetChecker> createState() => _NetCheckerState();
}

class _NetCheckerState extends State<NetChecker> {
  //initialzie timer
  Timer? timer;
  bool ActiveConnection = false;
  Future CheckUserConnection() async {
    try {
      final result = await InternetAddress.lookup('google.com');
      if (result.isNotEmpty && result[0].rawAddress.isNotEmpty) {
        setState(() {
          ActiveConnection = true;
        });
      }
    } on SocketException catch (_) {
      setState(() {
        ActiveConnection = false;
      });
    }
  }

  @override
  void initState() {
    CheckUserConnection();
    super.initState();
    timer =
        Timer.periodic(widget.netDuration, (Timer t) => CheckUserConnection());
  }

  @override
  void dispose() {
    timer?.cancel();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Container(
        padding: const EdgeInsets.all(8),
        color: ActiveConnection ? Colors.green : Colors.red,
        height: 50,
        width: MediaQuery.of(context).size.width,
        child: Column(
          children: [
            Text(
              ActiveConnection
                  ? "Connected to internet"
                  : "Not active connection",
              style: TextStyle(color: Colors.white, fontSize: 24),
            ),
          ],
        ));
  }
}