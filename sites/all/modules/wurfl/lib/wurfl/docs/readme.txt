Getting Started
=======================

1) Download a release archive from wurfl site and extract it to a directory 
   suitable for your application


To start using the api you need to set some configuration options.


1) Create a configuration file wurfl-config.xml (You can find a sample file in the resources directory)
 
 	It is the only file you need to to modify in order to use the api.
	
	a) set the paths to the location of the main wurfl  and patch files
		- you can put a compressed(zip) files if you have the 
		  zip module enabled
	
	b) Configure the Persistance provider by specifying the provider and 
		and the extra parameters needed to initialize the provider:
		The Api support the following caching mechanism
			- Memcache (http://uk2.php.net/memcache)	
			- APC(Alternative PHP Cahce http://uk3.php.net/apc)
			- File
		
		remember that if you want to use the first 2 implementaions you need to 
		install and load the relative modules.
	
		  
	c) Configure the Cache provider by specifying the provider and 
		and the extra parameters needed to initialize the provider:
		The Api support the following caching mechanism
			- Memcache (http://uk2.php.net/memcache)	
			- APC(Alternative PHP Cahce http://uk3.php.net/apc)
			- EAccelerator(http://eaccelerator.net/)
			- File
			- Null 
		
		remember that if you want to use the first 3 mechanisms you need to 
		install and load the relative modules.
		Please refer to the links for further information how to install and enable 
		the modules.
		
    	 
2) 
	- Add  a require_once to  'WURFL_Installation/WURFL/WURFLManagerProvider.php'; 
	- Obtain a WURFL_WURFLManager Instance from WURFL_WURFLManagerProvider
	
	- Obtaing the absolute path of the wurfl-config.xml file
		
		
		$wurflConfigFile = "/var/www/.."; // Absoulte path for the wurfl-config.xml
		e.g. $wurflManager = WURFL_WURFLManagerProvider::getWURFLManager($wurflConfigFile);
		


2.1 Getting the device
===========================

	You have Four methods for retrieving a device 
		a) getDeviceForRequest(WURFL_Request_GenericRequest $request)
			where a WURFL_Request_GenericRequest is an object which encapsulates 
			-userAgent, ua-profile, support for xhtml of the device
		
		b) getDeviceForHttpRequest($_SERVER)
			Most of the time you will use this method, and the api will create the 
			the  WURFL_Request_GenericRequest instance for you
			
		c) getDeviceForUserAgent(string $userAgent)
			
	 	d) getDevice(string $deviceID)
		
		
		e.g
			$device = $wurflManger->getDeviceForUserAgent($userAgent);

2.2 Getting the device properties and its capabiliites
===================================================

- To get the properites of the device like device id, userAgent, fallBack..
	is simple as 
	
	$deviceID = $device->id;
	$fallBack = $device->fallBack;
	
- To get the capability value 
	$capValue = $device->getCapabilityValue("capabilityName");
	$allCapabilities = $device->getAllCapabilities();
		

2.3) Useful Methods		
====================================
- In WURFL_WURFLManager you will find a bunch of utility methods like:
	- getListOfGroups() 
		which returns an array of all groups id found in the wurfl file.
		
		
		
TESTS
==================

There are a bunch of test in tests dir


The tests are for checking that the matching algorithms are working properly

As tests data provider we use the file "unit-test.yml" in tests/resources directory.

PHPUnit
================


SimpleTest
========================
to run the tests just lounch run.php (from inside tests/SimpleTest dir from cmd line)


Please Concat me for any problems and ideas you may have.

Fanta (fantayeneh@gmail.com)
			
