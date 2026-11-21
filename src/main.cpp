#include <Geode/Geode.hpp>
#include <bigmancozmo.emotes-api/API.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
	// the registry name must be 5 characters or less
	auto myRegistry = CustomEmoteRegistry::create("hello");

	// Remember that emotes must be part of a spritesheet!

	// robert topala
	myRegistry->addEmote(CustomEmote::create("robert", "robert.png"_spr)->setFlipX(true));

	// QUICK_EMOTE example
	QUICK_EMOTE(myRegistry, doogie);

	// remember to finalize it
	myRegistry->finalize();
	
	
	// this part showcases having a second registry
	auto myOtherRegistry = CustomEmoteRegistry::create("bye");
	myRegistry->addEmote(CustomEmote::create("robert", "robert.png"_spr)->setFlipX(true));
	myRegistry->finalize();
}
