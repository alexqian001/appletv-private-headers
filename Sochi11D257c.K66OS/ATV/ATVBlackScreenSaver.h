/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVScreenSaverPluginProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : XXUnknownSuperclass <ATVScreenSaverPluginProtocol> {
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x25c9a5
- (void)dealloc;	// 0x25ca5d
- (id)screenSaverControl;	// 0x25caa9
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x25cab9
- (BOOL)usesVideoPlayback;	// 0x25cabd
@end
