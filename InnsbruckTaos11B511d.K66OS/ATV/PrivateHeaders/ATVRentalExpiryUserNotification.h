/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRReflectedImageControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVRentalExpiryUserNotification : BRControl {
	BRControl *_dialogBox;	// 84 = 0x54
	BRReflectedImageControl *_imageControl;	// 88 = 0x58
	BRTextControl *_titleControl;	// 92 = 0x5c
	id<BRMediaAsset> _asset;	// 96 = 0x60
}
+ (void)postExpiryNotificationForAsset:(id)asset;	// 0x2098f9
- (id)init;	// 0x209991
- (void)_playAsset;	// 0x20a1f1
- (void)_setAsset:(id)asset;	// 0x209f51
- (BOOL)brEventAction:(id)action;	// 0x209cb5
- (void)dealloc;	// 0x209c51
- (void)layoutSubcontrols;	// 0x209d69
@end
