# Add more folders to ship with the application, here
folder_01.source = qml/KidPuzzle
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# If your application uses the Qt Mobility libraries, uncomment the following
# lines and add the respective components to the MOBILITY variable.
CONFIG += mobility
MOBILITY += multimedia

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp

INSTALLS += icon64

icon64.path = $$DATADIR/icons/hicolor/64x64/apps
icon64.files += KidPuzzle64.png

desktop.path = $$DATADIR/applications/hildon
desktop.files += KidPuzzle.desktop

# Please do not modify the following two lines. Required for deployment.
include(qmlapplicationviewer/qmlapplicationviewer.pri)
qtcAddDeployment()

