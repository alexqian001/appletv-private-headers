/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTPlayerControlling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaPlayer, RUIYTPlayerMemento, RUIYTMediaAsset, RUIYTLoadWaitController, BRControllerStack;
@protocol RUIYTVideoPlaybackAspectDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideoPlaybackAspect : XXUnknownSuperclass <RUIYTPlayerControlling> {
	BRControllerStack *_controllerStack;	// 4 = 0x4
	BRMediaPlayer *_player;	// 8 = 0x8
	RUIYTPlayerMemento *_playerMemento;	// 12 = 0xc
	RUIYTLoadWaitController *_loadWaitController;	// 16 = 0x10
	BOOL _showsRelatedMenu;	// 20 = 0x14
	id<RUIYTVideoPlaybackAspectDelegate> _delegate;	// 24 = 0x18
	id _context;	// 28 = 0x1c
}
@property(readonly, assign) id context;	// G=0x29ae55; @synthesize=_context
@property(readonly, assign) RUIYTMediaAsset *currentAsset;	// G=0x29a651; @dynamic
@property(assign, nonatomic) __weak id<RUIYTVideoPlaybackAspectDelegate> delegate;	// G=0x29ae35; S=0x29a5e5; @synthesize=_delegate
@property(readonly, assign) BOOL isWaitingForMoreAssets;	// G=0x29a5f5; @dynamic
@property(assign, nonatomic) BOOL showsRelatedMenu;	// G=0x29ae75; S=0x29ae85; @synthesize=_showsRelatedMenu
- (id)initWithControllerStack:(id)controllerStack;	// 0x29a4bd
- (void).cxx_destruct;	// 0x29ae95
- (void)_finishPlaybackWithError:(id)error;	// 0x29b67d
- (BOOL)_haveUserConsentForInappropriateContent;	// 0x29b14d
- (void)_loadMoreAssets;	// 0x29b3ad
- (void)_mediaPlayerCurrentAssetChanged:(id)changed;	// 0x29b799
- (void)_mediaPlayerPlaybackEnded:(id)ended;	// 0x29b809
- (void)_mediaPlayerPlaybackError:(id)error;	// 0x29b9bd
- (void)_mediaPlayerStateChanged:(id)changed;	// 0x29b935
- (id)_player;	// 0x29b139
- (id)_playerForAssetAtIndex:(int)index inPlaylist:(id)playlist;	// 0x29b309
- (void)_presentPlayer;	// 0x29b5d1
- (void)_pushRelatedMenu;	// 0x29b4fd
- (void)_setPlayer:(id)player;	// 0x29afd5
- (void)_setWaitingForMoreAssets:(BOOL)moreAssets;	// 0x29af15
- (void)abandonYTPlayback;	// 0x29ad91
- (void)appendAssets:(id)assets;	// 0x29a8d5
- (BOOL)canResumePlayback;	// 0x29aa11
// declared property getter: - (id)context;	// 0x29ae55
// declared property getter: - (id)currentAsset;	// 0x29a651
- (void)dealloc;	// 0x29a52d
// declared property getter: - (id)delegate;	// 0x29ae35
// declared property getter: - (BOOL)isWaitingForMoreAssets;	// 0x29a5f5
- (void)menuActionForPlayer:(id)player;	// 0x29ada5
- (void)playYTAssetAgain:(id)again;	// 0x29ac09
- (void)playbackAsset:(id)asset context:(id)context;	// 0x29a6cd
- (void)playbackAssetAtIndex:(int)index inPlaylist:(id)playlist context:(id)context;	// 0x29a779
- (void)resumeYTPlayback;	// 0x29abcd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x29a5e5
// declared property setter: - (void)setShowsRelatedMenu:(BOOL)menu;	// 0x29ae85
// declared property getter: - (BOOL)showsRelatedMenu;	// 0x29ae75
@end
