import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Garrasi',
      theme: ThemeData(
        primarySwatch: Colors.grey,
      ),
      home: MyHomePage(title: 'Garrasi Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({Key? key, required this.title}) : super(key: key);

  final String title;

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
          backgroundColor: Colors.white,
          appBar: AppBar(
            backgroundColor: Colors.black,
            title: Text('Garrisi'),
          ),
          body: Center(
              child: Column(children: <Widget>[
            Container(
              margin: EdgeInsets.all(25),
              child: FlatButton(
                child: Text(
                  'LogIn',
                  style: TextStyle(fontSize: 20.0),
                ),
                color: Colors.black,
                textColor: Colors.white,
                hoverColor: Colors.amber,
                onPressed: login,
              ),
            ),
            Container(
              margin: EdgeInsets.all(25),
              child: FlatButton(
                child: Text(
                  'Sign Up',
                  style: TextStyle(fontSize: 20.0),
                ),
                color: Colors.black,
                textColor: Colors.white,
                hoverColor: Colors.cyan[200],
                onPressed: () {
                  Navigator.push(context,
                  new MaterialPageRoute
                  (builder: (context) => new SignUpPage()),
                  );
                },
              ),
            ),
            Container(
              margin: EdgeInsets.all(0),
              child: Text(
                'No account ?',
                style: TextStyle(fontSize: 20.0),
              ),
              color: Colors.transparent,
            ),
            Container(
              margin: EdgeInsets.all(25),
              child: FlatButton(
                child: Text(
                  'Log as guest',
                  style: TextStyle(fontSize: 20.0),
                ),
                color: Colors.black,
                textColor: Colors.white,
                hoverColor: Colors.greenAccent[700],
                onPressed: () {
                  Navigator.push(context,
                  new MaterialPageRoute
                  (builder: (context) => new Guest()),
                  );
                },
              ),
            ),
          ]))),
    );
  }
    login() async {
    const url = 'https://accounts.google.com/signin/v2/identifier?flowName=GlifWebSignIn&flowEntry=ServiceLogin';
    if (await canLaunch(url)) {
      await launch(url);
    } else {
      throw 'Could not launch $url';
    }
  }
}

class SignUpPage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.white,
        appBar: AppBar(
        backgroundColor: Colors.black,
        title: Text('Sign Up'),
        ),
        body: Center(
          child: Column(
            children: [
              new Container(
                alignment: AlignmentDirectional.topStart,
                margin: EdgeInsets.all(15),
                child: FlatButton(
                  child: Text('Back',
                  style: TextStyle(fontSize: 20.0),
                  ),
                  color: Colors.black,
                  textColor: Colors.white,
                  hoverColor: Colors.red[700],
                  onPressed: () {
                    Navigator.pop(context);
                  },
                  ),
                ),
                new Container(
                  margin: EdgeInsets.all(10),
                  child: TextField(
                    obscureText: false,
                    decoration: InputDecoration(
                    border: OutlineInputBorder(),
                    labelText: 'ID',
                    ),
                  ),
                ),
                new Container(
                  margin: EdgeInsets.all(10),
                  child: TextField(
                    obscureText: true,
                    decoration: InputDecoration(
                    border: OutlineInputBorder(),
                    labelText: 'Password',
                    ),
                  ),
                ),
            ],
          ),
        )
      ),
    );
    }
}

class Guest extends StatelessWidget {

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        backgroundColor: Colors.black,
        title: Text('Garrisi'),
        ),
        body: Center(
          child: Column(
            children: <Widget>[
            new Container(
              alignment: AlignmentDirectional.topStart,
              margin: EdgeInsets.all(15),
              child: FlatButton(
                child: Text('Back',
                style: TextStyle(fontSize: 20.0),
                ),
                color: Colors.black,
                textColor: Colors.white,
                hoverColor: Colors.red[700],
                onPressed: () {
                  Navigator.pop(context);
                },
                ),
              ),
              new Container(
              margin: EdgeInsets.all(15),
              height: 150.0,
              width: 725.0,
              child: FlatButton(
                child: Text('The new RTX 3070 is available right now on amazon !!!',
                style: TextStyle(fontSize: 15.0),
                ),
                color: Colors.grey[350],
                textColor: Colors.black,
                onPressed: launchGuest,
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
  launchGuest() async {
    const url = 'https://www.amazon.fr/MSI-GeForce-GAMING-Gaming-Graphics/dp/B08LNPPCWJ/ref=sr%201_1?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=rtx+4090&qid=1624024757&sr=8-1#customerReviews';
    if (await canLaunch(url)) {
      await launch(url);
    } else {
      throw 'Could not launch $url';
    }
  }
}
