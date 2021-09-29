import 'package:flutter/animation.dart';
import 'package:flutter/material.dart';

 import 'dart:io';
//import 'package:flutter/services.dart';
//import 'package:video_player/video_player.dart';
//import 'package:file_picker/file_picker.dart';
//import 'package:audioplayers/audioplayers.dart';
import 'package:image_gallery_saver/image_gallery_saver.dart';
import 'package:permission_handler/permission_handler.dart';
import 'package:path_provider/path_provider.dart';
import 'package:dio/dio.dart';

import 'package:music_project/home_buttons.dart';

class Archive extends StatefulWidget {
  const Archive({ Key? key }) : super(key: key);

  @override
  _ArchiveState createState() => _ArchiveState();
}

class _ArchiveState extends State<Archive> {

  /*//Declare Globaly
  late String directory;
  List file = List.filled(1, 0, growable: true);

  @override
  void initState() {
    // TODO: implement initState
    super.initState();

    _listofFiles();

  }

  // Make New Function
  void _listofFiles() async {

    directory = (await getApplicationDocumentsDirectory()).path;

    setState(() {
      file = Directory("$directory/ASTRALARIA/").listSync();  //use your folder name insted of resume.
    });

  }*/

  Future appDir() async {
    Directory directory;
    try {

      if (Platform.isAndroid) {

        if (await _requestPermission(Permission.storage)) {

          directory = (await getExternalStorageDirectory())!;
          
          String newPath = "";
          
          print(directory);
          
          List<String> paths = directory.path.split("/");

          for (int x = 1; x < paths.length; x++) {

            String folder = paths[x];

            if (folder != "Android") {

              newPath += "/" + folder;

            } else {
              break;
            }
          }

          newPath = newPath + "/ASTRALARIA";
          directory = Directory(newPath);

        } else {
          return false;
        }
      
      } else {

        if (await _requestPermission(Permission.photos)) {
          directory = await getTemporaryDirectory();
        } else {
          return false;
        }

      }

      if (!await directory.exists()) {
        await directory.create(recursive: true);
      }

      return false;
    
    } catch (e) {

      print(e);
      return false;

    }
  
  }

  Future<bool> _requestPermission(Permission permission) async {
    if (await permission.isGranted) {
      return true;
    } else {
      var result = await permission.request();
      if (result == PermissionStatus.granted) {
        return true;
      }
    }
    return false;
  }

  @override
   Widget build(BuildContext context) {
    return Scaffold(
      
      backgroundColor: Colors.grey,
      
      body: Stack(
        
        children: [

          const HomeButtons(),

          Center(child: ElevatedButton(onPressed: appDir, child: const Text("Press Me !", style: TextStyle(color: Colors.white),))),

          /*ListView.builder(
            itemCount: ,
            itemBuilder: (context, index) {
            return Card(
              child: ListTile(
                onTap: () {},
                
              ),
            );
            },
          ),*/

        ],
      ),
    );
  }
}

