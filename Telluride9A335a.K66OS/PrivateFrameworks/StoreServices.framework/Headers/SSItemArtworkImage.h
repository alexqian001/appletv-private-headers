/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x30ec9bad; S=0x30ec9f81; 
@property(readonly, assign, nonatomic) int height;	// G=0x30ec98c1; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x30eca1ed; S=0x30eca1fd; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x30ec996d; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x30ec9a2d; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x30ec9e6d; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x30ec9a99; 
@property(readonly, assign, nonatomic) int width;	// G=0x30ec9b01; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x30ec9e19
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30eca059
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30eca0f9
// declared property getter: - (id)URL;	// 0x30ec9bad
- (void)_setValue:(id)value forKey:(id)key;	// 0x30ec9fcd
- (id)copyPropertyListEncoding;	// 0x30eca135
- (id)copyWithZone:(NSZone *)zone;	// 0x30ec9835
- (void *)copyXPCEncoding;	// 0x30eca1b9
- (void)dealloc;	// 0x30ec97d5
- (id)description;	// 0x30ec9c81
- (unsigned)hash;	// 0x30ec9d71
// declared property getter: - (int)height;	// 0x30ec98c1
// declared property getter: - (id)imageKind;	// 0x30eca1ed
// declared property getter: - (int)imageOrientation;	// 0x30ec996d
// declared property getter: - (float)imageScale;	// 0x30ec9a2d
// declared property getter: - (CGSize)imageSize;	// 0x30ec9e6d
- (BOOL)isEqual:(id)equal;	// 0x30ec9d99
// declared property getter: - (BOOL)isPrerendered;	// 0x30ec9a99
// declared property setter: - (void)setImageKind:(id)kind;	// 0x30eca1fd
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x30ec9eb9
// declared property setter: - (void)setURL:(id)url;	// 0x30ec9f81
- (void)setValue:(id)value forProperty:(id)property;	// 0x30ec9fbd
- (id)valueForProperty:(id)property;	// 0x30ec9c39
// declared property getter: - (int)width;	// 0x30ec9b01
@end

