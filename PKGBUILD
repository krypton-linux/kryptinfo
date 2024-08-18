# Maintainer: Itsuki Wada <itkwada222@gmail.com>

pkgname=kryptinfo
pkgver=20240818
pkgrel=1
pkgdesc='Easily Check System Information'
arch=('x86_64')
url='https://github.com/Itsuki0222/Kryptinfo'
license=('MIT')
makedepends=('clang')
source=("https://raw.githubusercontent.com/Itsuki0222/Kryptinfo/main/kryptinfo.tar.gz")
md5sums=('SKIP')

build()
{
    curl -o Makefile https://raw.githubusercontent.com/Itsuki0222/Kryptinfo/main/Makefile
    make
}

package()
{
    make install
}
