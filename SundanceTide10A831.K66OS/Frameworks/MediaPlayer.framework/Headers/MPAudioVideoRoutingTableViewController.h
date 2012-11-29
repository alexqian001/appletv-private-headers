/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAudioDeviceControllerDelegate.h"
#import <UITableViewController.h> // Unknown library

@class NSArray, MPAudioDeviceController;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate> {
	int _airPlayPasswordAlertDidAppearToken;	// 212 = 0xd4
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 216 = 0xd8
	int _airPlayPasswordAlertDidCancelToken;	// 220 = 0xdc
	MPAudioDeviceController *_audioDeviceController;	// 224 = 0xe0
	unsigned _avItemType;	// 228 = 0xe4
	BOOL _displayMirroringRoutes;	// 232 = 0xe8
	NSArray *_displayedRoutes;	// 236 = 0xec
	BOOL _wirelessDisplayCapableRouteIsPicked;	// 240 = 0xf0
	BOOL _wirelessDisplayRouteIsPendingAsPicked;	// 241 = 0xf1
}
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x36f6dbd9; @synthesize=_audioDeviceController
+ (id)routesPreferringMirroring;	// 0x36f6d501
- (id)initWithType:(unsigned)type displayMirroringRoutes:(BOOL)routes;	// 0x36f6bac1
- (id)_availableRoutes;	// 0x36f6d56d
- (id)_displayedRoutes;	// 0x36f6d915
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int *)type;	// 0x36f6d959
- (void)_mirroringSwitchValueDidChange:(id)_mirroringSwitchValue;	// 0x36f6d381
- (id)_pickedRoute;	// 0x36f6dab5
- (BOOL)_wirelessDisplayCapableRouteIsPicked;	// 0x36f6db8d
// declared property getter: - (id)audioDeviceController;	// 0x36f6dbd9
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x36f6c15d
- (void)dealloc;	// 0x36f6c0b1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x36f6c309
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x36f6cb19
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x36f6c2c9
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x36f6ca8d
- (void)viewDidAppear:(BOOL)view;	// 0x36f6c265
@end
