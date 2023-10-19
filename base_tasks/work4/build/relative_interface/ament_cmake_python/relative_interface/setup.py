from setuptools import find_packages
from setuptools import setup

setup(
    name='relative_interface',
    version='0.0.0',
    packages=find_packages(
        include=('relative_interface', 'relative_interface.*')),
)
