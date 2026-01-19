#!/bin/sh
cd api
make && sudo make install
cd ..
make config
make && sudo make install

echo "swm Instalado Com Sucesso."
