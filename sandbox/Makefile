build_arm:
	docker buildx build --platform linux/arm/v7 -t local/machinekit-hal:arm32v7 .

build_x86:
	docker build  -t machinekit-hal:amd64 .

shell:
	docker run --privileged --cap-add=CAP_AUDIT_WRITE --platform linux/arm/v7 -it -v $(pwd)/machine-kit:/src -v $(pwd)/artifacts:/artifacts --rm builders/machinekit-hal:arm32v7 /bin/bash

build:
	docker run --privileged --cap-add=CAP_AUDIT_WRITE --platform linux/arm/v7 -it -v $(pwd)/machine-kit:/src -v $(pwd)/artifacts:/artifacts --rm builders/machinekit-hal:arm32v7 /bin/bash /src/build.sh

test:
	docker run -it -v $(pwd)/artifacts:/artifacts --rm builders/machinekit-hal /bin/bash -c "/src/test.sh"

clean:
	sudo rm -rf artifacts/* machine-kit/build

transfer:
	sudo rsync -av artifacts/etc /srv/nfs/rootfs/
	sudo rsync -av artifacts/{bin,lib,libexec} /srv/nfs/rootfs/usr/
