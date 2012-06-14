/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUserReviewsControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 48 = 0x30
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x32921155
- (id)initWithDictionary:(id)dictionary;	// 0x32921191
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x32921e45
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x32921d39
- (id)_largeImageForRating:(float)rating;	// 0x32922051
- (id)_smallImageForRating:(float)rating;	// 0x32921f2d
- (id)accessibilityLabel;	// 0x32921d1d
- (void)dealloc;	// 0x329211e9
- (void)layoutSubcontrols;	// 0x32921235
@end
