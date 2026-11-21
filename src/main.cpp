#include <Geode/Geode.hpp>
#include <bigmancozmo.emotes-api/API.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
	// the registry name must be 5 characters or less
	auto myRegistry = CustomEmoteRegistry::create("hello", "Example Emotes 1");

	// Remember that emotes must be part of a spritesheet!

	// robert topala
	myRegistry->addEmote(CustomEmote::create("robert", "robert.png"_spr)->setFlipX(true));

	// QUICK_EMOTE example
	QUICK_EMOTE(myRegistry, doogie);

	// remember to finalize it
	myRegistry->finalize();
	
	
	// this part showcases having a second registry & a lot of emotes
	auto myOtherRegistry = CustomEmoteRegistry::create("bye", "Example Emotes 2");
	myOtherRegistry->addEmote(CustomEmote::create("rob1", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob2", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob3", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob4", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob5", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob6", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob7", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob8", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob9", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob10", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob11", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->addEmote(CustomEmote::create("rob12", "robert.png"_spr)->setFlipX(true));
	myOtherRegistry->finalize();
}
