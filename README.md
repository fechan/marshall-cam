# marshall-cam

## Protobuf
Protobuf definition files are in `/protocol`.

To compile for Go, run from the project root:
```bash
protoc ./protocol/cameraupdate.proto --go_out=.
```