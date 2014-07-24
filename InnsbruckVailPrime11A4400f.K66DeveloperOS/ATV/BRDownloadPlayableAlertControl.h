/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSString, BRReflectedImageControl, NSTimer, BRMessageButton;
@protocol BRMediaAsset, BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRDownloadPlayableAlertControl : BRControl {
	BRReflectedImageControl *_imageControl;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRTextControl *_clockStartWarningControl;	// 92 = 0x5c
	BRTextControl *_directionsControl;	// 96 = 0x60
	BRMessageButton *_playButton;	// 100 = 0x64
	id<BRImageProxy> _imageProxy;	// 104 = 0x68
	NSString *_imageID;	// 108 = 0x6c
	id<BRMediaAsset> _asset;	// 112 = 0x70
	double _activationTime;	// 116 = 0x74
	BOOL _didAttemptPost;	// 124 = 0x7c
	NSTimer *_imageLoadTimeout;	// 128 = 0x80
}
+ (void)postPlayableAlertForAsset:(id)asset;	// 0x3288e5
- (id)init;	// 0x32891d
- (void)_attemptPost;	// 0x32983d
- (id)_computeFramesForSize:(CGSize)size;	// 0x328e19
- (BOOL)_dialogShouldBePosted;	// 0x329569
- (void)_imageNotAvailable:(id)available;	// 0x329ef1
- (void)_imageUpdated:(id)updated;	// 0x329e09
- (BOOL)_isVideoPlayerControlActive;	// 0x329525
- (void)_playAsset;	// 0x329d59
- (void)_post;	// 0x329929
- (void)_postIfReady:(id)ready;	// 0x32944d
- (void)_postPlayableAlertForAsset:(id)asset;	// 0x3295fd
- (void)_setAsset:(id)asset;	// 0x329aa1
- (void)_setImage:(id)image;	// 0x329cfd
- (id)accessibilityControls;	// 0x329411
- (id)accessibilityLabel;	// 0x3293a9
- (BOOL)brEventAction:(id)action;	// 0x328c79
- (void)controlWasActivated;	// 0x328c35
- (void)dealloc;	// 0x328b2d
- (BOOL)isAccessibilityElement;	// 0x3293a5
- (void)layoutSubcontrols;	// 0x328db1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x328d61
@end
