/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateAddElement : CAStateElement {
	NSString *_keyPath;	// 12 = 0xc
	id _object;	// 16 = 0x10
	id _beforeObject;	// 20 = 0x14
}
@property(retain, nonatomic) id beforeObject;	// G=0x351e0e01; S=0x351e0e11; @synthesize=_beforeObject
@property(copy, nonatomic) NSString *keyPath;	// G=0x351e0dbd; S=0x351e0dd1; @synthesize=_keyPath
@property(retain, nonatomic) id object;	// G=0x351e0de1; S=0x351e0df1; @synthesize=_object
- (id)initWithCoder:(id)coder;	// 0x351e0bbd
- (void)apply:(id)apply;	// 0x351e0781
// declared property getter: - (id)beforeObject;	// 0x351e0e01
- (id)copyWithZone:(NSZone *)zone;	// 0x351e0a41
- (void)dealloc;	// 0x351e0c9d
- (id)debugDescription;	// 0x351e0d15
- (void)encodeWithCoder:(id)coder;	// 0x351e0b01
- (void)foreachLayer:(id)layer;	// 0x351e09f1
// declared property getter: - (id)keyPath;	// 0x351e0dbd
- (BOOL)matches:(id)matches;	// 0x351e0711
// declared property getter: - (id)object;	// 0x351e0de1
// declared property setter: - (void)setBeforeObject:(id)object;	// 0x351e0e11
// declared property setter: - (void)setKeyPath:(id)path;	// 0x351e0dd1
// declared property setter: - (void)setObject:(id)object;	// 0x351e0df1
@end
