/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRAsyncImageControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
@private
	BRAsyncImageControl *_imageControl;	// 48 = 0x30
	BRMarqueeTextControl *_chapterTitleControl;	// 52 = 0x34
	NSDictionary *_chapterInfo;	// 56 = 0x38
}
@property(retain) NSDictionary *chapterInfo;	// G=0x341d374d; S=0x341d33d5; converted property
- (id)init;	// 0x341d3305
// converted property getter: - (id)chapterInfo;	// 0x341d374d
- (void)controlWasFocused;	// 0x341d375d
- (void)controlWasUnfocused;	// 0x341d37cd
- (void)dealloc;	// 0x341d3361
- (void)layoutSubcontrols;	// 0x341d381d
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x341d33d5
@end
