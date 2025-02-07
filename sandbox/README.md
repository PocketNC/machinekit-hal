# README

This is in a very early state of development and *will* change in future
iterations.

The actual build process is done by Docker when the image is built. 

It requires a 'artifacts' directory and the source tree in 'machine-kit'. This leads to a recursive scenario as this directory *is* part of the source tree.

The easiest fix is to clone the 'sandbox' directory and then clone the machinekit repository into the 'machine-kit' directory within.

## Make Targets

build_arm | build_x86 - Build the Docker image for the specified architecture. (This will take some time)

build - Bundles the artifacts from the Docker image into the 'artifacts' directory.

### Debug Helpers

> These are useful targets when debugging machinekit or the build process.

transfer - Copies the artifacts to /srv/nfs/rootfs/ for tFTP/NFS booting.

shell - Runs the Docker image and drops into a Bash shell.

clean - Removes artifacts and resets the build environment to a clean state.
