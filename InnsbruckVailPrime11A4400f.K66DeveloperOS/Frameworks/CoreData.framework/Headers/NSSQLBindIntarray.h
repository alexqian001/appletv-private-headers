/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSString;

@interface NSSQLBindIntarray : NSObject {
	unsigned _index;	// 4 = 0x4
	id _value;	// 8 = 0x8
	NSString *_tableName;	// 12 = 0xc
}
@property(assign) unsigned index;	// G=0x2d075d31; S=0x2d075d45; @synthesize=_index
@property(retain) NSString *tableName;	// G=0x2d075d81; S=0x2d075d95; @synthesize=_tableName
@property(retain) id value;	// G=0x2d075d5d; S=0x2d075d71; @synthesize=_value
- (id)initWithValue:(id)value;	// 0x2d075c65
- (void)dealloc;	// 0x2d075cb9
// declared property getter: - (unsigned)index;	// 0x2d075d31
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x2d075d45
// declared property setter: - (void)setTableName:(id)name;	// 0x2d075d95
// declared property setter: - (void)setValue:(id)value;	// 0x2d075d71
// declared property getter: - (id)tableName;	// 0x2d075d81
// declared property getter: - (id)value;	// 0x2d075d5d
@end
