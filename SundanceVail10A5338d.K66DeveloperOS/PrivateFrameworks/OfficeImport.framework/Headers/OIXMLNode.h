/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface OIXMLNode : NSObject <NSCopying> {
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x339c9a2d; converted property
@property(retain) NSString *name;	// G=0x339c95e5; S=0x339c84e1; converted property
@property(retain) id objectValue;	// G=0x33c39119; S=0x339c87ad; converted property
@property(retain) id stringValue;	// G=0x339c9a3d; S=0x339c8525; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x339c9a61
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x33c39139
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x339c8711
+ (id)elementWithName:(id)name;	// 0x339c8425
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x339c8981
+ (id)textWithStringValue:(id)stringValue;	// 0x339d1685
- (id)initWithKind:(unsigned)kind;	// 0x339c84d1
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x339c8765
- (id)XMLString;	// 0x339c9659
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x339c98f9
- (id)closingTagString;	// 0x33c391d1
- (id)contentString;	// 0x33c391c1
- (id)copyWithZone:(NSZone *)zone;	// 0x33c39085
- (void)dealloc;	// 0x339dda8d
- (id)description;	// 0x33c39129
// converted property getter: - (unsigned)kind;	// 0x339c9a2d
// converted property getter: - (id)name;	// 0x339c95e5
// converted property getter: - (id)objectValue;	// 0x33c39119
- (id)openingTagString;	// 0x33c391b5
// converted property setter: - (void)setName:(id)name;	// 0x339c84e1
// converted property setter: - (void)setObjectValue:(id)value;	// 0x339c87ad
// converted property setter: - (void)setStringValue:(id)value;	// 0x339c8525
// converted property getter: - (id)stringValue;	// 0x339c9a3d
@end

