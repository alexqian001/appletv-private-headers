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
@property(readonly, retain) NSSQLForeignEntityKey *foreignEntityKey;	// G=0x33cc66b5; converted property
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x33cc66a5; converted property
@property(readonly, retain) NSSQLForeignOrderKey *foreignOrderKey;	// G=0x33cc76fd; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x33cdd4bd; converted property
@property(readonly, assign) unsigned slot;	// G=0x33d98d09; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x33d98a19
- (id)initWithEntity:(id)entity inverseToMany:(id)many;	// 0x33d98b31
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x33cc5f6d
- (id)initWithEntity:(id)entity propertyDescription:(id)description virtualForToMany:(id)many;	// 0x33cc5f91
- (void)_setForeignOrderKey:(id)key;	// 0x33d98c01
- (id)columnName;	// 0x33d98c55
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x33d98d55
- (void)dealloc;	// 0x33d98b51
- (id)description;	// 0x33d98c7d
// converted property getter: - (id)foreignEntityKey;	// 0x33cc66b5
// converted property getter: - (id)foreignKey;	// 0x33cc66a5
// converted property getter: - (id)foreignOrderKey;	// 0x33cc76fd
- (BOOL)isOptional;	// 0x33d98d19
// converted property getter: - (BOOL)isVirtual;	// 0x33cdd4bd
// converted property getter: - (unsigned)slot;	// 0x33d98d09
@end
