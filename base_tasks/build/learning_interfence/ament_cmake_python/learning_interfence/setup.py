from setuptools import find_packages
from setuptools import setup

setup(
    name='learning_interfence',
    version='0.0.0',
    packages=find_packages(
        include=('learning_interfence', 'learning_interfence.*')),
)
