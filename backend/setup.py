
from setuptools import setup

setup(
    name='backend',
    packages=['main', 'sensors'],
    include_package_data=True,
    install_requires=[
        'flask',
    ],
)