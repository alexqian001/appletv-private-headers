/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject {
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x33dab4dd; S=0x33dab4ed; converted property
@property(retain) NSDictionary *userInfo;	// G=0x33dab5a5; S=0x33dab5b5; converted property
@property(retain) NSExpression *valueExpression;	// G=0x33dab541; S=0x33dab551; converted property
+ (void)initialize;	// 0x33daafed
- (id)init;	// 0x33dab009
- (id)initWithCoder:(id)coder;	// 0x33dab175
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x33dab6a5
- (void)_createCachesAndOptimizeState;	// 0x33dab6cd
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x33dab609
- (id)_propertyTransforms;	// 0x33dab81d
- (void)_setIsEditable:(BOOL)editable;	// 0x33dab6d1
- (void)_setPropertyTransforms:(id)transforms;	// 0x33dab7c9
- (void)_throwIfNotEditable;	// 0x33dab769
- (id)copyWithZone:(NSZone *)zone;	// 0x33dab279
- (void)dealloc;	// 0x33dab01d
- (id)description;	// 0x33dab449
- (void)encodeWithCoder:(id)coder;	// 0x33dab0c5
- (BOOL)isEditable;	// 0x33dab6b5
- (BOOL)isEqual:(id)equal;	// 0x33dab331
// converted property getter: - (id)name;	// 0x33dab4dd
// converted property setter: - (void)setName:(id)name;	// 0x33dab4ed
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33dab5b5
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x33dab551
// converted property getter: - (id)userInfo;	// 0x33dab5a5
// converted property getter: - (id)valueExpression;	// 0x33dab541
@end
