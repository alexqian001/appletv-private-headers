/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransportControls.h"
#import "MediaPlayer-Structs.h"

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls {
	UIImage *_backgroundImage;	// 184 = 0xb8
	float _requiredFrameSizeWidth;	// 188 = 0xbc
}
- (id)init;	// 0x341c1db1
- (void)_layoutVolumeSlider:(id)slider;	// 0x341c2de5
- (void)_playbackModeDidChange;	// 0x341c2f31
- (void)dealloc;	// 0x341c1eb9
- (void)drawRect:(CGRect)rect;	// 0x341c1f39
- (void)layoutSubviews;	// 0x341c2009
- (id)newVolumeSlider;	// 0x341c2881
- (void)registerForPlayerNotifications;	// 0x341c2ce1
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x341c2909
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x341c1fa1
- (void)unregisterForPlayerNotifications;	// 0x341c2d75
@end

