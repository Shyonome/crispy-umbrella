import 'package:flutter/material.dart';
import 'package:music_project/home_buttons.dart';
//import 'package:music_project/main.dart';
/*import 'package:flutter/services.dart';
import 'package:video_player/video_player.dart';
//import 'package:file_picker/file_picker.dart';
//import 'package:audioplayers/audioplayers.dart';*/

class Settings extends StatefulWidget {
  const Settings({ Key? key }) : super(key: key);

  @override
  _SettingsState createState() => _SettingsState();
}

class _SettingsState extends State<Settings> {
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