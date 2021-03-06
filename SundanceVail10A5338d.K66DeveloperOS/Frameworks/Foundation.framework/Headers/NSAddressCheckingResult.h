/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x373f7eed; converted property
@property(readonly, assign) NSRange range;	// G=0x373f7d21; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x373f7efd; 
- (id)initWithCoder:(id)coder;	// 0x373f7bed
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x373f7ad5
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x373f7a41
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x373f7e51
// converted property getter: - (id)components;	// 0x373f7eed
- (void)dealloc;	// 0x373f7af9
- (void)encodeWithCoder:(id)coder;	// 0x373f7b5d
// converted property getter: - (NSRange)range;	// 0x373f7d21
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x373f7d39
- (unsigned long long)resultType;	// 0x373f7d19
// declared property getter: - (void *)underlyingResult;	// 0x373f7efd
@end

