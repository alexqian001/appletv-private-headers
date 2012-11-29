/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateRemoveAnimation : CAStateElement {
	NSString *_key;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *key;	// G=0x351e3c1d; S=0x351e3c31; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x351e3ad9
- (void)apply:(id)apply;	// 0x351e388d
- (id)copyWithZone:(NSZone *)zone;	// 0x351e3a01
- (void)dealloc;	// 0x351e3b4d
- (id)debugDescription;	// 0x351e3b99
- (void)encodeWithCoder:(id)coder;	// 0x351e3a7d
// declared property getter: - (id)key;	// 0x351e3c1d
- (id)keyPath;	// 0x351e3771
- (BOOL)matches:(id)matches;	// 0x351e37b5
// declared property setter: - (void)setKey:(id)key;	// 0x351e3c31
@end
