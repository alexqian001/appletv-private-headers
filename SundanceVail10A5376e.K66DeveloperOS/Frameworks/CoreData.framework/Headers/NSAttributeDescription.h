/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSString;

@interface NSAttributeDescription : NSPropertyDescription {
	Class _attributeValueClass;	// 48 = 0x30
	NSString *_valueTransformerName;	// 52 = 0x34
	unsigned _type;	// 56 = 0x38
	NSString *_attributeValueClassName;	// 60 = 0x3c
	attributeDescriptionFlags _attributeDescriptionFlags;	// 64 = 0x40
	id _defaultValue;	// 68 = 0x44
}
@property(assign) BOOL allowsExternalBinaryDataStorage;	// G=0x35bdec35; S=0x35c163d5; converted property
@property(assign) unsigned attributeType;	// G=0x35bdec0d; S=0x35c15ac5; converted property
@property(retain) NSString *attributeValueClassName;	// G=0x35c159cd; S=0x35c159dd; converted property
@property(retain) id defaultValue;	// G=0x35c15c0d; S=0x35c15c1d; converted property
@property(assign) BOOL storesBinaryDataExternally;	// G=0x35bdec1d; S=0x35c174e5; converted property
@property(retain) NSString *valueTransformerName;	// G=0x35c15cdd; S=0x35c15ced; converted property
+ (id)_classNameForType:(unsigned)type;	// 0x35c16411
+ (void)initialize;	// 0x35bd4a59
- (id)initWithCoder:(id)coder;	// 0x35c154d1
- (Class)_attributeValueClass;	// 0x35c174ad
- (int)_canConvertPredicate:(id)predicate andWarning:(id)warning;	// 0x35c16615
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x35c16b31
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)unoptimizedAttributeDescription;	// 0x35c16925
- (void)_createCachesAndOptimizeState;	// 0x35c16c41
- (id)_initWithName:(id)name type:(unsigned)type;	// 0x35c173d1
- (id)_initWithName:(id)name type:(unsigned)type withClassName:(id)className;	// 0x35c16551
- (id)_initWithType:(unsigned)type;	// 0x35c17499
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x35c16f39
- (unsigned)_propertyType;	// 0x35bf6da1
- (id)_rawValidationPredicates;	// 0x35c165bd
- (id)_rawValidationWarnings;	// 0x35c165e9
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x35c17315
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x35c174f5
// converted property getter: - (BOOL)allowsExternalBinaryDataStorage;	// 0x35bdec35
// converted property getter: - (unsigned)attributeType;	// 0x35bdec0d
// converted property getter: - (id)attributeValueClassName;	// 0x35c159cd
- (id)copyWithZone:(NSZone *)zone;	// 0x35c15765
- (void)dealloc;	// 0x35c152fd
// converted property getter: - (id)defaultValue;	// 0x35c15c0d
- (id)description;	// 0x35c15929
- (void)encodeWithCoder:(id)coder;	// 0x35c1538d
- (BOOL)isEqual:(id)equal;	// 0x35c15829
- (BOOL)isIndexed;	// 0x35c15c71
// converted property setter: - (void)setAllowsExternalBinaryDataStorage:(BOOL)storage;	// 0x35c163d5
// converted property setter: - (void)setAttributeType:(unsigned)type;	// 0x35c15ac5
// converted property setter: - (void)setAttributeValueClassName:(id)name;	// 0x35c159dd
// converted property setter: - (void)setDefaultValue:(id)value;	// 0x35c15c1d
// converted property setter: - (void)setStoresBinaryDataExternally:(BOOL)externally;	// 0x35c174e5
// converted property setter: - (void)setValueTransformerName:(id)name;	// 0x35c15ced
// converted property getter: - (BOOL)storesBinaryDataExternally;	// 0x35bdec1d
- (id)validationPredicates;	// 0x35c15d5d
- (id)validationWarnings;	// 0x35c161b9
// converted property getter: - (id)valueTransformerName;	// 0x35c15cdd
- (id)versionHash;	// 0x35c15d31
@end

