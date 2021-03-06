/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, NSMutableDictionary, AVPlayerItem;

__attribute__((visibility("hidden")))
@interface ATVPlayerEventDisplayControl : BRControl {
	NSMutableDictionary *_textAttrs;	// 84 = 0x54
	BRTextControl *_displayText;	// 88 = 0x58
	AVPlayerItem *_playerItem;	// 92 = 0x5c
}
+ (void)hidePlaybackEventPopup;	// 0x1ff8b5
+ (void)showPlaybackEventPopup:(id)popup;	// 0x1ff749
- (id)initWithPlayerItem:(id)playerItem;	// 0x1ff8f5
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x200079
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x200045
- (void)dealloc;	// 0x1ff9f5
- (void)layoutSubcontrols;	// 0x1ffa59
@end

