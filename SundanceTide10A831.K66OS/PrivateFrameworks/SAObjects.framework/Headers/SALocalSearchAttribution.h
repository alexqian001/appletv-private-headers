/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *attributionId;	// G=0x30513599; S=0x305135b5; 
@property(copy, nonatomic) NSArray *urls;	// G=0x30513605; S=0x305136a5; 
@property(assign, nonatomic) int version;	// G=0x30513725; S=0x30513795; 
+ (id)attribution;	// 0x30513509
+ (id)attributionWithDictionary:(id)dictionary context:(id)context;	// 0x3051354d
// declared property getter: - (id)attributionId;	// 0x30513599
- (id)encodedClassName;	// 0x305134fd
- (id)groupIdentifier;	// 0x305134ed
// declared property setter: - (void)setAttributionId:(id)anId;	// 0x305135b5
// declared property setter: - (void)setUrls:(id)urls;	// 0x305136a5
// declared property setter: - (void)setVersion:(int)version;	// 0x30513795
// declared property getter: - (id)urls;	// 0x30513605
// declared property getter: - (int)version;	// 0x30513725
@end
