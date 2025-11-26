#pragma once
#include "Prerequisites.h"

class
	AudioMixer {
public:
	AudioMixer() = default;
	~AudioMixer() = default;

	void setMasterVolume(float volume)
	{
		std::cout << "[AudioMixer] Volumen maestro establecido a: " << volume << std::endl;
	}
	void playChannel(int channelId)
	{
		std::cout << "[AudioMixer] Reproduciendo canal: " << channelId << std::endl;
	}
private:

};