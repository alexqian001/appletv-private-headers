/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMusicPlayerController.h"
#import "MPServerObjectProxy.h"

@class MPMediaItemCollection, MPMediaQuery, MPMusicPlayerController;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
	unsigned _clientPort;	// 16 = 0x10
	int _inBlockHandlingPlaybackStateChangedMessageFromServer;	// 20 = 0x14
	MPMediaItemCollection *_itemCollection;	// 24 = 0x18
	MPMusicPlayerController *_musicPlayerController;	// 28 = 0x1c
	int _playbackNotificationObservers;	// 32 = 0x20
	int _playbackState;	// 36 = 0x24
	BOOL _preparedToPlay;	// 40 = 0x28
	SBSProcessAssertionRef _processAssertion;	// 44 = 0x2c
	MPMediaQuery *_query;	// 48 = 0x30
	CFRunLoopSourceRef _runLoopSource;	// 52 = 0x34
	unsigned _didCheckIn : 1;	// 56 = 0x38
	unsigned _useApplicationSpecificQueue : 1;	// 56 = 0x38
	unsigned _useCachedPlaybackState : 1;	// 56 = 0x38
	unsigned _cachedPlaybackStateIsValid : 1;	// 56 = 0x38
	unsigned _allowsRemoteUIAccess : 1;	// 56 = 0x38
}
@property(assign) BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;	// G=0x34196575; S=0x34196551; 
- (id)initWithMusicPlayerController:(id)musicPlayerController;	// 0x3419624d
- (void)dealloc;	// 0x3419628d
- (void)didPrepareForRemoteSelectorInvocation;	// 0x34196411
// declared property getter: - (BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;	// 0x34196575
- (BOOL)prepareForRemoteSelectorInvocation;	// 0x341962d1
- (void)serverConnectionDied;	// 0x341964d1
// declared property setter: - (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)server;	// 0x34196551
@end

