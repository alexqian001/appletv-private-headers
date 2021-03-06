/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *query;	// G=0x353dec05; S=0x353dec21; 
@property(copy, nonatomic) NSArray *searchProperties;	// G=0x353dec71; S=0x353dec8d; 
+ (id)searchConstraint;	// 0x353deb75
+ (id)searchConstraintWithDictionary:(id)dictionary context:(id)context;	// 0x353debb9
- (id)encodedClassName;	// 0x353deb69
- (id)groupIdentifier;	// 0x353deb59
// declared property getter: - (id)query;	// 0x353dec05
// declared property getter: - (id)searchProperties;	// 0x353dec71
// declared property setter: - (void)setQuery:(id)query;	// 0x353dec21
// declared property setter: - (void)setSearchProperties:(id)properties;	// 0x353dec8d
@end

