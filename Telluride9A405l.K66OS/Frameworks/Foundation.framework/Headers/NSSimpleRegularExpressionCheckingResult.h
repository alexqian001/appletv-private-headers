/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpressionCheckingResult.h"

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
@private
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSRange _ranges[3];	// 8 = 0x8
}
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x3033c2e5; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x3033c1f5
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x3033c0e5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x3033c311
- (void)dealloc;	// 0x3033c299
- (unsigned)numberOfRanges;	// 0x3033c3d9
- (NSRange)range;	// 0x3033c2f5
- (id)rangeArray;	// 0x3033c495
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x3033c40d
// converted property getter: - (id)regularExpression;	// 0x3033c2e5
@end

