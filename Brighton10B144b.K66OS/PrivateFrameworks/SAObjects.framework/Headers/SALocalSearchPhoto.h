/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSURL, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *fullsize;	// G=0x35400109; S=0x35400185; 
@property(copy, nonatomic) NSString *identifier;	// G=0x354001e5; S=0x35400201; 
@property(retain, nonatomic) SAUIAppPunchOut *photoPunchOut;	// G=0x35400251; S=0x354002a5; 
@property(copy, nonatomic) NSURL *thumbnail;	// G=0x354002e1; S=0x3540035d; 
+ (id)photo;	// 0x35400079
+ (id)photoWithDictionary:(id)dictionary context:(id)context;	// 0x354000bd
- (id)encodedClassName;	// 0x3540006d
// declared property getter: - (id)fullsize;	// 0x35400109
- (id)groupIdentifier;	// 0x3540005d
// declared property getter: - (id)identifier;	// 0x354001e5
// declared property getter: - (id)photoPunchOut;	// 0x35400251
// declared property setter: - (void)setFullsize:(id)fullsize;	// 0x35400185
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x35400201
// declared property setter: - (void)setPhotoPunchOut:(id)anOut;	// 0x354002a5
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x3540035d
// declared property getter: - (id)thumbnail;	// 0x354002e1
@end

