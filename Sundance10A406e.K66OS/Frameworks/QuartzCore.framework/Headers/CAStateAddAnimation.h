/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement {
	NSString *_key;	// 12 = 0xc
	CAAnimation *_animation;	// 16 = 0x10
}
@property(retain, nonatomic) CAAnimation *animation;	// G=0x304d06f1; S=0x304d0701; @synthesize=_animation
@property(copy, nonatomic) NSString *key;	// G=0x304d06cd; S=0x304d06e1; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x304d052d
// declared property getter: - (id)animation;	// 0x304d06f1
- (void)apply:(id)apply;	// 0x304d0239
- (id)copyWithZone:(NSZone *)zone;	// 0x304d0411
- (void)dealloc;	// 0x304d05d1
- (id)debugDescription;	// 0x304d0635
- (void)encodeWithCoder:(id)coder;	// 0x304d04b1
// declared property getter: - (id)key;	// 0x304d06cd
- (id)keyPath;	// 0x304d011d
- (BOOL)matches:(id)matches;	// 0x304d0161
// declared property setter: - (void)setAnimation:(id)animation;	// 0x304d0701
// declared property setter: - (void)setKey:(id)key;	// 0x304d06e1
@end

