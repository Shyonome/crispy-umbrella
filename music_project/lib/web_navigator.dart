import 'package:flutter/material.dart';
import 'package:music_project/home_buttons.dart';
/*import 'package:flutter/services.dart';
import 'package:video_player/video_player.dart';
//import 'package:file_picker/file_picker.dart';
//import 'package:audioplayers/audioplayers.dart';*/

class WebNavigator extends StatefulWidget {
  const WebNavigator({ Key? key }) : super(key: key);

  @override
  _WebNavigatorState createState() => _WebNavigatorState();
}

class _WebNavigatorState extends State<WebNavigator> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      
      body: Stack(

        children: const [

          HomeButtons()

        ],

      ),

    );
  }
}