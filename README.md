My attempt to standardise bringing up a newbie/fresh Linux kernel development environment.
Getting started in this area has a reasonable barrier to entry which i would like to make smaller.

## Requirements
ansible
ssh configuration

yum install ansible


If you are on Fedora 23 or later you are going to also need python-dnf

## Checking Sytax
ansible-playbook play.yml --check

## Running Playbook
ansible-playbook play.yml -i hosts -K

## House Keeping Contributing

Please keep the basic structure of the roles and the variables declared in the top level play.yml
Happy to merge in anything you think i have missed and i deam a reasonable addition.
Multiple distro additions welcome.


## Roadmap

Git config
	* setup a git config to be deployed


IDE Setup
	* Graphical IDE
	* Scripting / Expansion support for syntax checking etc


Vim Improvement
	* Key bindings for syntax checking
	* Key bindings for other hacks


Alpine / MTA Improvement
	* email templates for patches etc


Setup SMTP server with settings to not alter attachments to base64
    * Ansible this too

