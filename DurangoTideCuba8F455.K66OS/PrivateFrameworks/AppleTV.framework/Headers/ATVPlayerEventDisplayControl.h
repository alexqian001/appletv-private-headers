/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library

@class BRTextControl, NSMutableDictionary, NSArray, BRImageControl;

@interface ATVPlayerEventDisplayControl : BRControl {
@private
	NSMutableDictionary *_textAttrs;	// 44 = 0x2c
	BRImageControl *_background;	// 48 = 0x30
	BRTextControl *_displayText;	// 52 = 0x34
	NSArray *_eventLogs;	// 56 = 0x38
}
+ (void)hidePlaybackEventPopup;	// 0x3070c431
+ (void)showPlaybackEventPopup:(id)popup;	// 0x3070c465
- (id)init;	// 0x3070c565
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x3070c2c5
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x3070c341
- (void)dealloc;	// 0x3070c3b1
- (void)layoutSubcontrols;	// 0x3070c6d5
- (void)setEventLogs:(id)logs;	// 0x3070c375
@end
