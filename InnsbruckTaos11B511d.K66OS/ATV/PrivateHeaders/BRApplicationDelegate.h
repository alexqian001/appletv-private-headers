/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "CATVApplicationDelegate.h"


@protocol BRApplicationDelegate <CATVApplicationDelegate>
- (void)completeNormalApplicationDidFinishLaunching;
- (BOOL)ignorePlayPauseEvents;
- (void)registerIgnorePlayPause:(BOOL)pause forClient:(id)client;
- (void)unregisterIgnorePlayPauseForClient:(id)client;
@end

