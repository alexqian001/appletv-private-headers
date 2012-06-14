/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSExpression, NSString;

__attribute__((visibility("hidden")))
@interface NSPropertyTransform : NSObject {
@private
	NSExpression *_valueExpression;	// 4 = 0x4
	NSString *_propertyName;	// 8 = 0x8
	NSPropertyTransform *_prerequisiteTransform;	// 12 = 0xc
	BOOL _replaceMissingValueOnly;	// 16 = 0x10
}
@property(retain, nonatomic) NSPropertyTransform *prerequisiteTransform;	// G=0x322ff099; S=0x322ff449; @synthesize=_prerequisiteTransform
@property(retain, nonatomic) NSString *propertyName;	// G=0x322ff0b9; S=0x322ff3f9; @synthesize=_propertyName
@property(assign) BOOL replaceMissingValueOnly;	// G=0x322ff079; S=0x322ff089; @synthesize=_replaceMissingValueOnly
@property(retain, nonatomic) NSExpression *valueExpression;	// G=0x322ff0a9; S=0x322ff421; @synthesize=_valueExpression
- (id)initWithCoder:(id)coder;	// 0x322ff579
- (id)initWithPropertyName:(id)propertyName valueExpression:(id)expression;	// 0x322ff0c9
- (id)copyWithZone:(NSZone *)zone;	// 0x322ff1e1
- (void)dealloc;	// 0x322ff365
- (id)description;	// 0x322ff2a1
- (void)encodeWithCoder:(id)coder;	// 0x322ff115
- (BOOL)isEqual:(id)equal;	// 0x322ff471
// declared property getter: - (id)prerequisiteTransform;	// 0x322ff099
// declared property getter: - (id)propertyName;	// 0x322ff0b9
// declared property getter: - (BOOL)replaceMissingValueOnly;	// 0x322ff079
// declared property setter: - (void)setPrerequisiteTransform:(id)transform;	// 0x322ff449
// declared property setter: - (void)setPropertyName:(id)name;	// 0x322ff3f9
// declared property setter: - (void)setReplaceMissingValueOnly:(BOOL)only;	// 0x322ff089
// declared property setter: - (void)setValueExpression:(id)expression;	// 0x322ff421
// declared property getter: - (id)valueExpression;	// 0x322ff0a9
@end
