/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVLikesBadgeView : BRControl {
	BRTextControl *_textControl;	// 84 = 0x54
	BRImageControl *_imageControl;	// 88 = 0x58
}
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0x102541; S=0x102551; @synthesize=_imageControl
@property(retain, nonatomic) BRTextControl *textControl;	// G=0x102509; S=0x102519; @synthesize=_textControl
+ (id)likesBadgeWithNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x101d1d
+ (id)likesBadgeWithNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes textAttributes:(id)attributes imageAlpha:(float)alpha;	// 0x101db9
- (id)initWithNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes textAttributes:(id)attributes imageAlpha:(float)alpha;	// 0x101e21
- (void).cxx_destruct;	// 0x102579
// declared property getter: - (id)imageControl;	// 0x102541
- (void)layoutSubcontrols;	// 0x102271
// declared property setter: - (void)setImageControl:(id)control;	// 0x102551
// declared property setter: - (void)setTextControl:(id)control;	// 0x102519
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x10215d
// declared property getter: - (id)textControl;	// 0x102509
@end

