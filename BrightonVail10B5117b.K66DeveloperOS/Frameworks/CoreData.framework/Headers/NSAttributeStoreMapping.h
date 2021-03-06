/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
	int _externalType;	// 12 = 0xc
	unsigned _externalPrecision;	// 16 = 0x10
	int _externalScale;	// 20 = 0x14
}
@property(assign) unsigned externalPrecision;	// G=0x30f25e8d; S=0x30f25e9d; converted property
@property(assign) int externalScale;	// G=0x30f25ead; S=0x30f25ebd; converted property
@property(assign) int externalType;	// G=0x30f25e6d; S=0x30f25e7d; converted property
- (id)initWithProperty:(id)property;	// 0x30f25d3d
- (id)attribute;	// 0x30f25e5d
- (id)columnDefinition;	// 0x30f26005
// converted property getter: - (unsigned)externalPrecision;	// 0x30f25e8d
// converted property getter: - (int)externalScale;	// 0x30f25ead
// converted property getter: - (int)externalType;	// 0x30f25e6d
- (BOOL)isEqual:(id)equal;	// 0x30f25dad
// converted property setter: - (void)setExternalPrecision:(unsigned)precision;	// 0x30f25e9d
// converted property setter: - (void)setExternalScale:(int)scale;	// 0x30f25ebd
// converted property setter: - (void)setExternalType:(int)type;	// 0x30f25e7d
- (id)sqlType;	// 0x30f25ecd
@end

