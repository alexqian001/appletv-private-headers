/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFAttributedString : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x369febcd
- (BOOL)_isDeallocating;	// 0x369feb65
- (BOOL)_tryRetain;	// 0x369feb55
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x369fef7d
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x369fef49
- (void)appendAttributedString:(id)string;	// 0x369feec1
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x369febe1
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x369fec39
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x369febed
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x369febd5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x369fec19
- (Class)classForCoder;	// 0x369fecad
- (id)copyWithZone:(NSZone *)zone;	// 0x369fec71
- (void)deleteCharactersInRange:(NSRange)range;	// 0x369feef1
- (void)finalize;	// 0x369feb8d
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x369fee99
- (BOOL)isEqual:(id)equal;	// 0x369feb75
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x369fec59
- (unsigned)length;	// 0x369febdd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x369fec8d
- (oneway void)release;	// 0x369feb51
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x369fefd1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x369fee6d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x369fecdd
- (id)retain;	// 0x369feb41
- (unsigned)retainCount;	// 0x369feb71
- (void)setAttributedString:(id)string;	// 0x369fef19
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x369fee39
- (id)string;	// 0x369febd1
@end

