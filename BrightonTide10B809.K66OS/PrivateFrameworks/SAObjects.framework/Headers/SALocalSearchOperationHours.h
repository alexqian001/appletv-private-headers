/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSDictionary;

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDictionary *operationPeriods;	// G=0x354004f9; S=0x354005cd; 
+ (id)operationHours;	// 0x35400469
+ (id)operationHoursWithDictionary:(id)dictionary context:(id)context;	// 0x354004ad
- (id)encodedClassName;	// 0x3540045d
- (id)groupIdentifier;	// 0x3540044d
// declared property getter: - (id)operationPeriods;	// 0x354004f9
// declared property setter: - (void)setOperationPeriods:(id)periods;	// 0x354005cd
@end
