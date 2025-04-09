from setuptools import find_packages
from setuptools import setup

setup(
    name='tuper_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('tuper_interfaces', 'tuper_interfaces.*')),
)
