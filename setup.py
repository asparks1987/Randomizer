from setuptools import setup, find_packages

setup(
    name='libRandomizerr',
    version='0.0.1a', 
    url='https://github.com/asparks1987/libRandomizer',
    author='Aryn M. Sparks',
    author_email='Aryn.sparks1987@gmail.com',
    description='Random alphanumeric character generator',
    packages=find_packages(),    
    install_requires=['pytz'],
)