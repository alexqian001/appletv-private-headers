/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSAttributeDescription;

@interface NSSQLBindVariable : NSObject {
	int _cd_rc;	// 4 = 0x4
	id _value;	// 8 = 0x8
	unsigned _sqlType;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
	long long _int64;	// 20 = 0x14
	NSAttributeDescription *_attributeDescription;	// 28 = 0x1c
}
@property(readonly, retain) NSAttributeDescription *attributeDescription;	// G=0x36616489; converted property
@property(assign) unsigned index;	// G=0x36616479; S=0x3658ade1; converted property
@property(assign) long long int64;	// G=0x3661639d; S=0x366163d5; converted property
@property(readonly, assign) unsigned sqlType;	// G=0x3658cb11; converted property
@property(assign) unsigned unsignedInt;	// G=0x366163e9; S=0x3661641d; converted property
@property(retain) id value;	// G=0x3658cb41; S=0x36616435; converted property
- (id)initWithInt64:(long long)int64 sqlType:(unsigned)type;	// 0x36616279
- (id)initWithUnsignedInt:(unsigned)unsignedInt sqlType:(unsigned)type;	// 0x366162c5
- (id)initWithValue:(id)value sqlType:(unsigned)type attributeDescription:(id)description;	// 0x36589e75
- (BOOL)_isDeallocating;	// 0x36616371
- (BOOL)_tryRetain;	// 0x36616321
// converted property getter: - (id)attributeDescription;	// 0x36616489
- (void)dealloc;	// 0x3658d36d
- (BOOL)hasObjectValue;	// 0x3658cb21
// converted property getter: - (unsigned)index;	// 0x36616479
// converted property getter: - (long long)int64;	// 0x3661639d
- (oneway void)release;	// 0x36589f61
- (id)retain;	// 0x36589f29
- (unsigned)retainCount;	// 0x3661630d
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x3658ade1
// converted property setter: - (void)setInt64:(long long)a64;	// 0x366163d5
// converted property setter: - (void)setUnsignedInt:(unsigned)int;	// 0x3661641d
// converted property setter: - (void)setValue:(id)value;	// 0x36616435
// converted property getter: - (unsigned)sqlType;	// 0x3658cb11
// converted property getter: - (unsigned)unsignedInt;	// 0x366163e9
// converted property getter: - (id)value;	// 0x3658cb41
@end

