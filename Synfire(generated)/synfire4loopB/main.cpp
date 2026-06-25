	// Instanciate the CARLsim simulation object
	CARLsim* carlsim = new CARLsim("synfire4loopB", (SimMode)0, (LoggerMode)0, 0, 42);

	// CONFIG STATE
	carlsim->setIntegrationMethod(FORWARD_EULER, 10);

	carlsim->setupNetwork();

