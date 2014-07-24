/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
	NSDictionary *_itemDictionary;	// 84 = 0x54
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x1eef31
- (id)initWithDictionary:(id)dictionary;	// 0x1eef6d
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1f00f5
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1f01b5
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1f006d
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x1f02a5
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x1f02cd
- (id)accessibilityLabel;	// 0x1f0051
- (void)dealloc;	// 0x1eefc5
- (void)layoutSubcontrols;	// 0x1ef011
@end
