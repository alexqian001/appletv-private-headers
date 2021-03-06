/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *fullsize;	// G=0x305129e9; S=0x30512a65; 
@property(copy, nonatomic) NSString *identifier;	// G=0x30512ac5; S=0x30512ae1; 
@property(retain, nonatomic) SAUIAppPunchOut *photoPunchOut;	// G=0x30512b31; S=0x30512b85; 
@property(copy, nonatomic) NSURL *thumbnail;	// G=0x30512bc1; S=0x30512c3d; 
+ (id)photo;	// 0x30512959
+ (id)photoWithDictionary:(id)dictionary context:(id)context;	// 0x3051299d
- (id)encodedClassName;	// 0x3051294d
// declared property getter: - (id)fullsize;	// 0x305129e9
- (id)groupIdentifier;	// 0x3051293d
// declared property getter: - (id)identifier;	// 0x30512ac5
// declared property getter: - (id)photoPunchOut;	// 0x30512b31
// declared property setter: - (void)setFullsize:(id)fullsize;	// 0x30512a65
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x30512ae1
// declared property setter: - (void)setPhotoPunchOut:(id)anOut;	// 0x30512b85
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x30512c3d
// declared property getter: - (id)thumbnail;	// 0x30512bc1
@end

