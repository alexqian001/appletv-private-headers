/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSData;

__attribute__((visibility("hidden")))
@interface MRMediaRemoteState : NSObject {
	BOOL _canBeNowPlayingApp;	// 4 = 0x4
	id _commandHandlerBlock;	// 8 = 0x8
	BOOL _isOverrideApp;	// 12 = 0xc
	int _notifyLaunchedToken;	// 16 = 0x10
	NSData *_nowPlayingArtworkData;	// 20 = 0x14
	NSDictionary *_nowPlayingInfo;	// 24 = 0x18
	unsigned _routeDiscoveryCount;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL canBeNowPlayingApp;	// G=0x321bd589; S=0x321bd599; @synthesize=_canBeNowPlayingApp
@property(copy, nonatomic) id commandHandlerBlock;	// G=0x321bd5a9; S=0x321bd5bd; @synthesize=_commandHandlerBlock
@property(assign, nonatomic) BOOL isOverrideApp;	// G=0x321bd5cd; S=0x321bd5dd; @synthesize=_isOverrideApp
@property(retain, nonatomic) NSData *nowPlayingArtworkData;	// G=0x321bd5ed; S=0x321bd5fd; @synthesize=_nowPlayingArtworkData
@property(retain, nonatomic) NSDictionary *nowPlayingInfo;	// G=0x321bd60d; S=0x321bd61d; @synthesize=_nowPlayingInfo
- (id)init;	// 0x321bd0b9
- (void)_avSystemControllerServerConnectionDiedNotification:(id)notification;	// 0x321bd401
- (void)beginRouteDiscovery;	// 0x321bd55d
// declared property getter: - (BOOL)canBeNowPlayingApp;	// 0x321bd589
// declared property getter: - (id)commandHandlerBlock;	// 0x321bd5a9
- (void)dealloc;	// 0x321bd331
- (void)endRouteDiscovery;	// 0x321bd571
// declared property getter: - (BOOL)isOverrideApp;	// 0x321bd5cd
// declared property getter: - (id)nowPlayingArtworkData;	// 0x321bd5ed
// declared property getter: - (id)nowPlayingInfo;	// 0x321bd60d
// declared property setter: - (void)setCanBeNowPlayingApp:(BOOL)app;	// 0x321bd599
// declared property setter: - (void)setCommandHandlerBlock:(id)block;	// 0x321bd5bd
// declared property setter: - (void)setIsOverrideApp:(BOOL)app;	// 0x321bd5dd
// declared property setter: - (void)setNowPlayingArtworkData:(id)data;	// 0x321bd5fd
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x321bd61d
@end

