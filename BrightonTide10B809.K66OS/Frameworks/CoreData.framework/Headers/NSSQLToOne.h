/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {
	NSSQLForeignKey *_foreignKey;	// 32 = 0x20
	NSSQLForeignEntityKey *_foreignEntityKey;	// 36 = 0x24
	NSSQLForeignOrderKey *_foreignOrderKey;	// 40 = 0x28
	unsigned _slot;	// 44 = 0x2c
	BOOL _isVirtual;	// 48 = 0x30
}
@property(readonly, retain) NSSQLForeignEntityKey *foreignEntityKey;	// G=0x30e99785; converted property
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x30e99775; converted property
@property(readonly, retain) NSSQLForeignOrderKey *foreignOrderKey;	// G=0x30e9a7cd; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x30eb0595; converted property
@property(readonly, assign) unsigned slot;	// G=0x30f6c2ed; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x30f6bffd
- (id)initWithEntity:(id)entity inverseToMany:(id)many;	// 0x30f6c115
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x30e9903d
- (id)initWithEntity:(id)entity propertyDescription:(id)description virtualForToMany:(id)many;	// 0x30e99061
- (void)_setForeignOrderKey:(id)key;	// 0x30f6c1e5
- (id)columnName;	// 0x30f6c239
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x30f6c339
- (void)dealloc;	// 0x30f6c135
- (id)description;	// 0x30f6c261
// converted property getter: - (id)foreignEntityKey;	// 0x30e99785
// converted property getter: - (id)foreignKey;	// 0x30e99775
// converted property getter: - (id)foreignOrderKey;	// 0x30e9a7cd
- (BOOL)isOptional;	// 0x30f6c2fd
// converted property getter: - (BOOL)isVirtual;	// 0x30eb0595
// converted property getter: - (unsigned)slot;	// 0x30f6c2ed
@end

