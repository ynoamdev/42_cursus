#!/bin/bash
unzip phpMyAdmin-5.0.1-all-languages.zip
rm -fr *.zip
mv phpMyAdmin-*/ /usr/share/phpmyadmin
