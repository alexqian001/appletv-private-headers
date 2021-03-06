/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPPadFullScreenVideoOverlay, MPAudioVideoRoutingPopoverController;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 284 = 0x11c
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 288 = 0x120
	unsigned _firstVideoFrameDisplayed : 1;	// 292 = 0x124
}
- (id)init;	// 0x34df1d79
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x34df2f55
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x34df2d91
- (void)_rotationAnimationFinished:(id)finished;	// 0x34df2fcd
- (BOOL)canChangeScaleMode;	// 0x34df2565
- (BOOL)controlsOverlayVisible;	// 0x34df23d9
- (void)dealloc;	// 0x34df1df9
- (void)firstVideoFrameDisplayedNotification:(id)notification;	// 0x34df2f3d
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x34df2979
- (void)loadView;	// 0x34df1f05
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x34df2f29
- (void)overlayTappedBackButton:(id)button;	// 0x34df2e7d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x34df2efd
- (id)overlayView;	// 0x34df25dd
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34df2d35
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x34df229d
- (void)setDisabledParts:(unsigned)parts;	// 0x34df237d
- (void)setItem:(id)item;	// 0x34df2431
- (void)setPlayer:(id)player;	// 0x34df2175
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x34df24b9
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x34df230d
- (void)showOverlayAnimated:(BOOL)animated;	// 0x34df2765
- (void)startTicking;	// 0x34df2069
- (void)stopTicking;	// 0x34df20a9
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x34df21bd
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x34df2b8d
- (id)videoOverlayView;	// 0x34df2745
- (id)videoOverlayViewIfLoaded;	// 0x34df2755
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x34df2ae5
- (void)viewWillDisappear:(BOOL)view;	// 0x34df1f55
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x34df20c9
@end

