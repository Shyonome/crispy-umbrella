import 'package:audioplayers/audioplayers.dart';
import 'package:file_picker/file_picker.dart';
//import 'package:audioplayers/audioplayers.dart';
import 'package:video_player/video_player.dart';
import 'package:flutter/material.dart';
import 'package:music_project/main.dart';

import 'settings.dart';
import 'app_files.dart';
import 'archive.dart';
import 'web_navigator.dart';

class HomeButtons extends StatefulWidget {
  const HomeButtons({ Key? key }) : super(key: key);

  @override
  _HomeButtonsState createState() => _HomeButtonsState();
}

class _HomeButtonsState extends State<HomeButtons> {

  final AudioPlayer _controller = AudioPlayer();
  bool opening = false;
  bool glowing = false;
  bool hide = true;

  @override
  Widget build(BuildContext context) {
    return Stack(
      
      children: [

        // Home Buttons
          Container(
            margin: const EdgeInsets.symmetric(vertical: 30.0, horizontal: 30.0),
            child: Center(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.end,
                  children: [

                    GestureDetector(

                    
                    onTap: () {
                      setState(() {
                        if (!glowing && !opening) {
                          opening = true;
                          glowing = true;
                        } else {
                          opening = false;
                          glowing = false;
                        }
                      });
                    },

                    onLongPress: () {
                      setState(() {
                        Navigator.of(context)
                        .push(MaterialPageRoute(builder: (BuildContext context) {
                        return const MusicApp();
                        })
                        );
                      });
                    },
                    
                    // Home Button
                    child: AnimatedContainer(
                      child: const Center(
                        child: Text("Home", style: TextStyle(
                          color: Colors.black,
                          fontSize: 20,
                          fontWeight: FontWeight.bold,
                        ),),
                      ),
                      duration: const Duration(
                        milliseconds: 200,
                        ),
                      height: 75.0,
                      width: 75.0,
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(60),
                        color: Colors.white,
                        boxShadow: glowing? const [

                          BoxShadow(
                            color: Colors.black,
                            spreadRadius: 15,
                            blurRadius: 16,
                            offset: Offset(1, 0),
                          )

                        ]: []
                      ),
                    ),
                    ),
                  ],
                ),
              )
          ),
          
          // Navigator Button
          Align(
            alignment: const Alignment(-0.75, 0.7),
            child: IgnorePointer(
              ignoring: !opening,
              child: AnimatedOpacity(
                opacity: opening ? 1.0 : 0.0,
                duration: const Duration(milliseconds: 500),
                  child: GestureDetector(
                    onTap: () {
                      setState(() {
                      Navigator.of(context)
                      .push(MaterialPageRoute(builder: (BuildContext context) {
                        return const WebNavigator();
                      })
                      );
                    });
                    },
                    child: AnimatedContainer(
                      child: const Center(
                        child: Text("Navigator", style: TextStyle(
                          color: Colors.black,
                          fontSize: 15,
                          fontWeight: FontWeight.bold,
                        ),),
                      ),
                      duration: const Duration(
                        milliseconds: 200,
                        ),
                      height: 75.0,
                      width: 75.0,
                      decoration: BoxDecoration(
                        borderRadius: BorderRadius.circular(60),
                        color: Colors.white,
                        boxShadow: glowing? [

                          BoxShadow(
                            color: Colors.cyanAccent.shade100,
                            spreadRadius: 15,
                            blurRadius: 16,
                            offset: const Offset(1, 0),
                          )

                        ]: []
                      ),
                    ),
                  ),
              ),
            ),
          ),

          // Archive Button
          Align(
            alignment: const Alignment(-0.0, 0.5),
            child: IgnorePointer(
              ignoring: !opening,
              child: AnimatedOpacity(
                opacity: opening ? 1.0 : 0.0,
                duration: const Duration(milliseconds: 800),
                child: GestureDetector(
                  onTap: () {
                    setState(() {
                      Navigator.of(context)
                      .push(MaterialPageRoute(builder: (BuildContext context) {
                        return const Archive();
                      })
                      );
                    });
                  },
                  child: AnimatedContainer(
                    child: const Center(
                      child: Text("Archive", style: TextStyle(
                        color: Colors.black,
                        fontSize: 15,
                        fontWeight: FontWeight.bold,
                      ),),
                    ),
                    duration: const Duration(
                      milliseconds: 200,
                      ),
                    height: 75.0,
                    width: 75.0,
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(60),
                      color: Colors.white,
                      boxShadow: glowing? [

                        const BoxShadow(
                          color: Colors.greenAccent,
                          spreadRadius: 15,
                          blurRadius: 16,
                          offset: Offset(1, 0),
                        )

                      ]: []
                    ),
                  ),
                ),
              ),
            ),
          ),

          // App File Button
          Align(
            alignment: const Alignment(-0.75, 0.3),
            child: IgnorePointer(
              ignoring: !opening,
              child: AnimatedOpacity(
                opacity: opening ? 1.0 : 0.0,
                duration: const Duration(milliseconds: 1300),
                child: GestureDetector(
                  onTap: () async {
                    String? result = FilePicker.platform.pickFiles().toString();
                    print(result);
                    //_controller.play(result, isLocal: true);
                  },
                  child: AnimatedContainer(
                    child: const Center(
                      child: Text("+", style: TextStyle(
                        color: Colors.black,
                        fontSize: 30,
                        fontWeight: FontWeight.bold,
                      ),),
                    ),
                    duration: const Duration(
                      milliseconds: 200,
                      ),
                    height: 75.0,
                    width: 75.0,
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(60),
                      color: Colors.white,
                      boxShadow: glowing? [

                        const BoxShadow(
                          color: Colors.white,
                          spreadRadius: 15,
                          blurRadius: 16,
                          offset: Offset(1, 0),
                        )

                      ]: []
                    ),
                  ),
                ),
              ),
            ),
          ),

          // Settings Button
          Align(
            alignment: const Alignment(0.75, 0.7),
            child: IgnorePointer(
              ignoring: !opening,
              child: GestureDetector(
                onTap: () {
                  setState(() {
                      Navigator.of(context)
                      .push(MaterialPageRoute(builder: (BuildContext context) {
                        return const Settings();
                      })
                      );
                    });
                },
                child: AnimatedOpacity(
                  opacity: opening ? 1.0 : 0.0,
                  duration: const Duration(milliseconds: 1000),
                  child: AnimatedContainer(
                    child: const Center(
                      child: Text("Settings", style: TextStyle(
                        color: Colors.black,
                        fontSize: 15,
                        fontWeight: FontWeight.bold,
                      ),),
                    ),
                    duration: const Duration(
                      milliseconds: 200,
                      ),
                    height: 75.0,
                    width: 75.0,
                    decoration: BoxDecoration(
                      borderRadius: BorderRadius.circular(60),
                      color: Colors.white,
                      boxShadow: glowing? [

                        const BoxShadow(
                          color: Colors.amber,
                          spreadRadius: 15,
                          blurRadius: 16,
                          offset: Offset(1, 0),
                        )

                      ]: []
                    ),
                  ),
                ),
              ),
            ),
          ),

      ],

    );
  }
}