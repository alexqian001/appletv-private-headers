/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *attributionId;	// G=0x353ffcb9; S=0x353ffcd5; 
@property(copy, nonatomic) NSArray *urls;	// G=0x353ffd25; S=0x353ffdc5; 
@property(assign, nonatomic) int version;	// G=0x353ffe45; S=0x353ffeb5; 
+ (id)attribution;	// 0x353ffc29
+ (id)attributionWithDictionary:(id)dictionary context:(id)context;	// 0x353ffc6d
// declared property getter: - (id)attributionId;	// 0x353ffcb9
- (id)encodedClassName;	// 0x353ffc1d
- (id)groupIdentifier;	// 0x353ffc0d
// declared property setter: - (void)setAttributionId:(id)anId;	// 0x353ffcd5
// declared property setter: - (void)setUrls:(id)urls;	// 0x353ffdc5
// declared property setter: - (void)setVersion:(int)version;	// 0x353ffeb5
// declared property getter: - (id)urls;	// 0x353ffd25
// declared property getter: - (int)version;	// 0x353ffe45
@end
