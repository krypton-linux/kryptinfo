# Maintainer: Itsuki Wada <175463719+Itsuki0222@users.noreply.github.com>
# Contributor: nekogakure < >

pkgname=kryptinfo
pkgver=20250217
pkgrel=1
pkgdesc='Easily Check System Information'
arch=('x86_64')
url='https://github.com/krypton-linux/kryptinfo'
license=('MIT')
depends=('lsb-release' 'fastfetch')
makedepends=('clang')
source=("https://raw.githubusercontent.com/krypton-linux/kryptinfo/main/kryptinfo.tar.gz")
md5sums=('SKIP')

build()
{
    cd kryptinfo
    make
}

package()
{
    install -Dm755 kryptinfo -t "$pkgdir"/usr/bin
    install -Dm644 LICENSE -t "$pkgdir"/usr/share/licenses/$pkgname
}
