$ErrorActionPreference = 'Stop'

Remove-Item out -Recurse -Force -ErrorAction SilentlyContinue

docker build -t hellowasm .
docker create --name hellowasm hellowasm
docker cp hellowasm:/out ./out
docker rm hellowasm
