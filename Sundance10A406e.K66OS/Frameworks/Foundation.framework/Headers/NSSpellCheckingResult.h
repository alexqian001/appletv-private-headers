/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
}
@property(readonly, assign) NSRange range;	// G=0x355f60a1; converted property
- (id)initWithCoder:(id)coder;	// 0x355f5fa9
- (id)initWithRange:(NSRange)range;	// 0x355f5f55
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x355f61a1
- (void)encodeWithCoder:(id)coder;	// 0x355f5f99
// converted property getter: - (NSRange)range;	// 0x355f60a1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x355f60b9
- (unsigned long long)resultType;	// 0x355f6099
@end
