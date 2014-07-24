/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTHDCPIndicatorControl : BRControl {
	NSMutableDictionary *_textAttrs;	// 84 = 0x54
	BRImageControl *_background;	// 88 = 0x58
	BRTextControl *_level;	// 92 = 0x5c
	BOOL _HDCPEnabled;	// 96 = 0x60
}
+ (void)hideHDCPIndicatorPopup;	// 0x4a8a9d
+ (void)showHDCPIndicatorPopup:(BOOL)popup;	// 0x4a88ed
- (id)init;	// 0x4a8aed
- (void).cxx_destruct;	// 0x4a8e89
- (void)layoutSubcontrols;	// 0x4a8cc1
@end
