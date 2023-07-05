#pragma once

#include "Worker.h"
#include "TImer.h"

inline void Worker::doSomething()
{
	Timer timer;	// start timer

	// do some work here

	timer.elapsed();	// end timer and report elapsed time
}
