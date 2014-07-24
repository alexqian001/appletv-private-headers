/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString, NSArray;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *description;	// G=0x326d13c9; S=0x326d13e5; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x326d1435; S=0x326d149d; 
@property(copy, nonatomic) NSNumber *selected;	// G=0x326d1505; S=0x326d1521; 
+ (id)metadataGroup;	// 0x326d1339
+ (id)metadataGroupWithDictionary:(id)dictionary context:(id)context;	// 0x326d137d
// declared property getter: - (id)description;	// 0x326d13c9
- (id)encodedClassName;	// 0x326d132d
- (id)groupIdentifier;	// 0x326d131d
// declared property getter: - (id)metadata;	// 0x326d1435
// declared property getter: - (id)selected;	// 0x326d1505
// declared property setter: - (void)setDescription:(id)description;	// 0x326d13e5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x326d149d
// declared property setter: - (void)setSelected:(id)selected;	// 0x326d1521
@end
