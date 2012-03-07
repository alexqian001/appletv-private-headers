/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface BRSoundHandler : BRSingleton {
@private
	BOOL _isSoundPrefEnabled;	// 4 = 0x4
	BOOL _soundSuppressed;	// 5 = 0x5
	unsigned long _soundIDs[23];	// 8 = 0x8
}
+ (void)playSound:(int)sound;	// 0x33b64c05
+ (void)reloadSoundPreference;	// 0x33b64c61
+ (void)setSingleton:(id)singleton;	// 0x33b64bf5
+ (void)setSoundSuppressed:(BOOL)suppressed;	// 0x33b64c35
+ (id)singleton;	// 0x33b64be5
- (id)init;	// 0x33b64c89
- (unsigned long)_actionIDForAlertSound:(int)alertSound;	// 0x33b64dd1
- (BOOL)_allowedToPlaySound;	// 0x33b64e61
- (void)_playSound:(int)sound;	// 0x33b64e9d
- (void)_reloadSoundPreference;	// 0x33b64edd
- (void)_setSoundSuppressed:(BOOL)suppressed;	// 0x33b64e8d
- (void)dealloc;	// 0x33b64ce5
@end
