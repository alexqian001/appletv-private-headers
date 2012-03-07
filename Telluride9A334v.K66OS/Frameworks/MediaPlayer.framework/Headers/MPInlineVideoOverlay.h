/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class MPNowPlayingItemQueueInfoButton, MPInlineTransportControls;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
@private
	MPInlineTransportControls *_transportControls;	// 100 = 0x64
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 104 = 0x68
	unsigned _layoutSubviewsActive : 1;	// 108 = 0x6c
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x34e3502d; S=0x34e35065; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x34e341e9
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x34e35301
- (void)_configureLinkButtonForCurrentItemTime;	// 0x34e34e2d
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x34e35331
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x34e3502d
- (void)crossedURLTimeMarker:(id)marker;	// 0x34e34f4d
- (void)dealloc;	// 0x34e34285
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x34e34f5d
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x34e34fed
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x34e34fad
- (void)layoutSubviews;	// 0x34e34365
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x34e34e21
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x34e35065
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x34e35101
- (void)setDisabledParts:(unsigned)parts;	// 0x34e35225
- (void)setFrame:(CGRect)frame;	// 0x34e34dd9
- (void)setItem:(id)item;	// 0x34e350a5
- (void)setVideoViewController:(id)controller;	// 0x34e3526d
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x34e35189
@end
