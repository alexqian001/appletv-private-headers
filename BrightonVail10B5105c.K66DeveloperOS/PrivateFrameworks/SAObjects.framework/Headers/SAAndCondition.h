/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASupportCondition.h"
#import "AceObject.h"

@class NSArray;

@interface SAAndCondition : AceObject <SASupportCondition> {
}
@property(copy, nonatomic) NSArray *conditions;	// G=0x303c8af5; S=0x303c8b5d; 
+ (id)andCondition;	// 0x303c8a65
+ (id)andConditionWithDictionary:(id)dictionary context:(id)context;	// 0x303c8aa9
// declared property getter: - (id)conditions;	// 0x303c8af5
- (id)encodedClassName;	// 0x303c8a59
- (id)groupIdentifier;	// 0x303c8a49
// declared property setter: - (void)setConditions:(id)conditions;	// 0x303c8b5d
@end
