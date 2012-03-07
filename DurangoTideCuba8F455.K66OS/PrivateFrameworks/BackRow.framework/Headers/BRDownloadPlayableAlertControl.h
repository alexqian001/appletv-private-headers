/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRReflectedImageControl, BRDropShadowControl, BRTextControl;
@protocol BRMediaAsset;

@interface BRDownloadPlayableAlertControl : BRControl {
@private
	BRDropShadowControl *_shadowControl;	// 44 = 0x2c
	BRControl *_dialogBox;	// 48 = 0x30
	BRReflectedImageControl *_imageControl;	// 52 = 0x34
	BRTextControl *_titleControl;	// 56 = 0x38
	BRTextControl *_clockStartWarningControl;	// 60 = 0x3c
	BRTextControl *_directionsControl;	// 64 = 0x40
	id<BRMediaAsset> _asset;	// 68 = 0x44
	double _activationTime;	// 72 = 0x48
}
+ (void)_imageLoadedOrErrored:(id)errored withImage:(id)image;	// 0x32f6bac5
+ (void)_imageNotAvailable:(id)available;	// 0x32f6b339
+ (void)_imageUpdated:(id)updated;	// 0x32f6b365
+ (void)_postPlayableAlertForAsset:(id)asset withAssetImage:(id)assetImage;	// 0x32f6b3cd
+ (void)postPlayableAlertForAsset:(id)asset;	// 0x32f2e275
- (id)init;	// 0x32f2e3c1
- (BOOL)_dialogShouldBePosted;	// 0x32f6b5c1
- (BOOL)_isVideoPlayerControlActive;	// 0x32f6b649
- (void)_playAsset;	// 0x32f3d77d
- (void)_postIfReady:(id)ready;	// 0x32f6b685
- (void)_postWithControl:(id)control;	// 0x32f6b4e9
- (void)_setAsset:(id)asset;	// 0x32f2e69d
- (void)_setImage:(id)image;	// 0x32f6b4c9
- (id)accessibilityLabel;	// 0x32f6ba65
- (BOOL)brEventAction:(id)action;	// 0x32f2e9fd
- (void)controlWasActivated;	// 0x32f2e9bd
- (void)dealloc;	// 0x32f2ead9
- (BOOL)isAccessibilityElement;	// 0x32f6b335
- (void)layoutSubcontrols;	// 0x32f6b761
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f6b6e9
@end
