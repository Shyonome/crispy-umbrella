import 'package:flutter/services.dart';
import 'package:video_player/video_player.dart';
//import 'package:file_picker/file_picker.dart';
//import 'package:audioplayers/audioplayers.dart';
import 'package:flutter/material.dart';

/*import 'package:image_gallery_saver/image_gallery_saver.dart';
import 'package:permission_handler/permission_handler.dart';
import 'package:path_provider/path_provider.dart';
import 'package:dio/dio.dart';*/

import 'home_buttons.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return const MaterialApp(
      debugShowCheckedModeBanner: false,
      home: MusicApp(),
    );
  }
}

class MusicApp extends StatefulWidget {
  const MusicApp({ Key? key }) : super(key: key);

  @override
  _MusicAppState createState() => _MusicAppState();
}

class _MusicAppState extends State<MusicApp> {

  late VideoPlayerController _controller;

  bool opening = false;
  bool glowing = false;
  bool hide = true;

  @override
  void initState() {
    super.initState();
    _controller = VideoPlayerController.asset("assets/video/Home_Background.mp4")
    ..initialize().then((value) => {setState(() {})});
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.portraitUp,
    ]);
    _controller.setLooping(true);
    _controller.setVolume(0.0);
    _controller.play();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,

      body: Stack(
        
        children: <Widget> [

          // Home Video Background
          SizedBox.expand(
            child: FittedBox(
              fit: BoxFit.cover,
              child: SizedBox(
                width: _controller.value.size.width,
                height: _controller.value.size.height,
                child: VideoPlayer(_controller),
              ),
            ),
          ),

          const HomeButtons()

        ],
      ),
    );
  }
}