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
@property(copy, nonatomic) NSString *attributionId;	// G=0x355dc059; S=0x355dc075; 
@property(copy, nonatomic) NSArray *urls;	// G=0x355dc0c5; S=0x355dc165; 
@property(assign, nonatomic) int version;	// G=0x355dc1e5; S=0x355dc255; 
+ (id)attribution;	// 0x355dbfc9
+ (id)attributionWithDictionary:(id)dictionary context:(id)context;	// 0x355dc00d
// declared property getter: - (id)attributionId;	// 0x355dc059
- (id)encodedClassName;	// 0x355dbfbd
- (id)groupIdentifier;	// 0x355dbfad
// declared property setter: - (void)setAttributionId:(id)anId;	// 0x355dc075
// declared property setter: - (void)setUrls:(id)urls;	// 0x355dc165
// declared property setter: - (void)setVersion:(int)version;	// 0x355dc255
// declared property getter: - (id)urls;	// 0x355dc0c5
// declared property getter: - (int)version;	// 0x355dc1e5
@end
