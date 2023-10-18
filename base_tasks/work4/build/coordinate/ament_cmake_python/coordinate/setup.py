from setuptools import find_packages
from setuptools import setup

setup(
    name='coordinate',
    version='0.0.0',
    packages=find_packages(
        include=('coordinate', 'coordinate.*')),
)
