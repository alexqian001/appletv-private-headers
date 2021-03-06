/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x36671551; converted property
+ (void)initialize;	// 0x36670fe5
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x36671001
- (id)_propertyCache;	// 0x36671661
- (id)_snapshot_;	// 0x36671599
- (unsigned)_versionNumber;	// 0x3667159d
- (void)dealloc;	// 0x366712b5
- (const id *)knownKeyValuesPointer;	// 0x36671579
// converted property getter: - (id)objectID;	// 0x36671551
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x3667132d
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x366715ad
- (unsigned long long)version;	// 0x36671561
@end

