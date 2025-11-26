#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Facade/AudioLoader.h"
#include "GameProgrammingPatterns/Facade/AudioMixer.h"
#include "GameProgrammingPatterns/Facade/AudioEffectsProcessor.h"

class
	AudioFacade {
public:
	AudioFacade() = default;
	~AudioFacade() = default;

	void
		initialize() {
		std::cout << "[AudioFacade] Inicializando sistema de audio..." << std::endl;
		// Lógica de inicialización real iría aquí.
		mixer.setMasterVolume(0.8f);
		effects.setReverbEnabled(true);
	}

	void
		playBackgroundMusic(const std::string& musicPath) {
		std::cout << "[AudioFacade] Solicitando reproducción de música de fondo..." << std::endl;

		if (loader.loadSound(musicPath)) {
			const int musicChannelId = 0; // Canal reservado para música.
			mixer.playChannel(musicChannelId);
		}
		else {
			std::cerr << "[AudioFacade] Error al cargar la música: "
				<< musicPath << std::endl;
		}
	}

	void
		playSfx(const std::string& sfxPath) {
		std::cout << "[AudioFacade] Solicitando reproducción de SFX..." << std::endl;

		if (loader.loadSound(sfxPath)) {
			const int sfxChannelId = 1; // Canal para efectos de sonido.
			mixer.playChannel(sfxChannelId);
		}
		else {
			std::cerr << "[AudioFacade] Error al cargar el SFX: "
				<< sfxPath << std::endl;
		}
	}

	void
		setMasterVolume(float volume) {
		mixer.setMasterVolume(volume);
	}

	void
		enableReverb(bool enabled) {
		effects.setReverbEnabled(enabled);
	}

private:
	AudioLoader           loader;   ///< Cargador de recursos de audio.
	AudioMixer            mixer;    ///< Mezclador de canales.
	AudioEffectsProcessor effects;  ///< Procesador de efectos.
};