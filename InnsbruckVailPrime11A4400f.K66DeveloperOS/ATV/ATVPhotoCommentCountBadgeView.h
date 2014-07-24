/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoCommentCountBadgeView : BRControl {
	int _commentStyle;	// 84 = 0x54
	int _commentCount;	// 88 = 0x58
	int _style;	// 92 = 0x5c
	BRTextControl *_textControl;	// 96 = 0x60
	BRImageControl *_imageControl;	// 100 = 0x64
}
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0xca4a9; S=0xca4b9; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0xca451; S=0xca461; @synthesize=_style
@property(retain, nonatomic) BRTextControl *textControl;	// G=0xca471; S=0xca481; @synthesize=_textControl
+ (id)badgeViewWithStyle:(int)style;	// 0xc9b21
- (id)init;	// 0xc9b51
- (id)initWithBadgeStyle:(int)badgeStyle;	// 0xc9b5d
- (void).cxx_destruct;	// 0xca4e1
- (void)_updateImageForUnreadState:(BOOL)unreadState;	// 0xca1a1
- (id)accessibilityLabel;	// 0xca31d
// declared property getter: - (id)imageControl;	// 0xca4a9
- (void)layoutSubcontrols;	// 0xc9ee9
- (void)setCommentStyle:(int)style;	// 0xc9d69
- (void)setCount:(unsigned)count unread:(BOOL)unread;	// 0xc9ba5
// declared property setter: - (void)setImageControl:(id)control;	// 0xca4b9
// declared property setter: - (void)setStyle:(int)style;	// 0xca461
// declared property setter: - (void)setTextControl:(id)control;	// 0xca481
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xc9df5
// declared property getter: - (int)style;	// 0xca451
// declared property getter: - (id)textControl;	// 0xca471
@end
