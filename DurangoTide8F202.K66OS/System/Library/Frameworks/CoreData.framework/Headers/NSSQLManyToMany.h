/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLManyToMany : NSSQLRelationship {
@private
	NSString *_correlationTableName;	// 32 = 0x20
	NSString *_columnName;	// 36 = 0x24
}
@property(readonly, retain) NSString *columnName;	// G=0x33189411; converted property
@property(readonly, retain) NSString *correlationTableName;	// G=0x33189805; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x33189421
- (void)_setColumnName:(id)name;	// 0x3318959d
- (void)_setCorrelationTableName:(id)name;	// 0x33189561
- (void)_setInverseManyToMany:(id)many;	// 0x331895f9
// converted property getter: - (id)columnName;	// 0x33189411
// converted property getter: - (id)correlationTableName;	// 0x33189805
- (void)dealloc;	// 0x3318983d
- (id)inverseColumnName;	// 0x33189509
- (id)inverseManyToMany;	// 0x3318954d
- (BOOL)isMaster;	// 0x331893fd
- (BOOL)isReflexive;	// 0x331895d9
- (BOOL)isTableSchemaEqual:(id)equal;	// 0x3318945d
@end

