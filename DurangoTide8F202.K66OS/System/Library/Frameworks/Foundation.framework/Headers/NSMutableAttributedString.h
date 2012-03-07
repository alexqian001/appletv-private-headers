/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"


@interface NSMutableAttributedString : NSAttributedString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x324d9801
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x324d9b41
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x324d99e9
- (void)addAttributesWeakly:(id)weakly range:(NSRange)range;	// 0x324d8ee5
- (void)appendAttributedString:(id)string;	// 0x324db5e1
- (void)beginEditing;	// 0x324d820d
- (void)deleteCharactersInRange:(NSRange)range;	// 0x324d88ad
- (void)endEditing;	// 0x324d8211
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x324db5bd
- (id)mutableString;	// 0x324d886d
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x324d8df9
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x324db4ed
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x324d83a5
- (void)setAttributedString:(id)string;	// 0x324db635
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x324d8379
@end
