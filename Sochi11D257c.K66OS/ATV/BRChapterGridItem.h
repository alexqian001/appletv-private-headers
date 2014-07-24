/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, NSDictionary, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRChapterGridItem : BRControl {
	BRAsyncImageControl *_imageControl;	// 84 = 0x54
	BRMarqueeTextControl *_chapterTitleControl;	// 88 = 0x58
	NSDictionary *_chapterInfo;	// 92 = 0x5c
}
@property(retain) NSDictionary *chapterInfo;	// G=0x362ced; S=0x3629b1; converted property
- (id)init;	// 0x3628dd
// converted property getter: - (id)chapterInfo;	// 0x362ced
- (void)controlWasFocused;	// 0x362cfd
- (void)controlWasUnfocused;	// 0x362d6d
- (void)dealloc;	// 0x362939
- (void)layoutSubcontrols;	// 0x362dbd
// converted property setter: - (void)setChapterInfo:(id)info;	// 0x3629b1
@end
