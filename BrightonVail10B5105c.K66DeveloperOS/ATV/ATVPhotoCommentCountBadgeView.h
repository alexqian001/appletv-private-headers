/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoCommentCountBadgeView : BRControl {
	int _commentStyle;	// 84 = 0x54
	int _commentCount;	// 88 = 0x58
	BRImageControl *_imageControl;	// 92 = 0x5c
	BRTextControl *_textControl;	// 96 = 0x60
	int _style;	// 100 = 0x64
}
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0x3e8295; S=0x3e82a5; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x3e8305; S=0x3e8315; @synthesize=_style
@property(retain, nonatomic) BRTextControl *textControl;	// G=0x3e82cd; S=0x3e82dd; @synthesize=_textControl
+ (id)badgeViewWithStyle:(int)style;	// 0x3e7979
- (id)init;	// 0x3e79a9
- (id)initWithStyle:(int)style;	// 0x3e79b5
- (void).cxx_destruct;	// 0x3e8325
- (void)_updateImageForUnreadState:(BOOL)unreadState;	// 0x3e8009
- (id)accessibilityLabel;	// 0x3e8161
// declared property getter: - (id)imageControl;	// 0x3e8295
- (void)layoutSubcontrols;	// 0x3e7d55
- (void)setCommentStyle:(int)style;	// 0x3e7bcd
- (void)setCount:(unsigned)count unread:(BOOL)unread;	// 0x3e7a09
// declared property setter: - (void)setImageControl:(id)control;	// 0x3e82a5
// declared property setter: - (void)setStyle:(int)style;	// 0x3e8315
// declared property setter: - (void)setTextControl:(id)control;	// 0x3e82dd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3e7c61
// declared property getter: - (int)style;	// 0x3e8305
// declared property getter: - (id)textControl;	// 0x3e82cd
@end
