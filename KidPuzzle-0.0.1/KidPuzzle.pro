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

INSTALLS += icon desktop

icon.path = /usr/share/icons/hicolor/scalable/hildon/
icon.files += KidPuzzle48.png

desktop.path = /usr/share/applications/hildon/
desktop.files += KidPuzzle.desktop

# Please do not modify the following two lines. Required for deployment.
include(qmlapplicationviewer/qmlapplicationviewer.pri)
qtcAddDeployment()

