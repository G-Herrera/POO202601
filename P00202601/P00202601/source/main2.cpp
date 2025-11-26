#include "Prerequisites.h"
#include "GameProgrammingPatterns/Facade/AudioFacade.h"
int main() {
	// Crear la fachada de audio
	AudioFacade audioSystem;

	// Inicializar el sistema de audio
	audioSystem.initialize();
	// Reproducir musica de fondo
	audioSystem.playBackgroundMusic("assets/music/background_track.mp3");
	// Reproducir un efecto de sonido
	audioSystem.playSfx("assets/sfx/jump.wav");
	// Ajustar el volumen maestro
	audioSystem.setMasterVolume(0.5f);
	// Habilitar el efecto de reverberacion
	audioSystem.enableReverb(true);
	

	return 0;
}