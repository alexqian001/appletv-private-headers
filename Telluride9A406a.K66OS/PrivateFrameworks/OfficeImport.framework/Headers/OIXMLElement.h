/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OIXMLElement : OIXMLNode {
@private
	id _attributes;	// 16 = 0x10
	id _children;	// 20 = 0x14
	BOOL _hasMultipleAttributes;	// 24 = 0x18
	BOOL _hasMultipleChildren;	// 25 = 0x19
}
@property(retain) id objectValue;	// G=0x32aec321; S=0x32820675; converted property
+ (void)_initEmptyHTMLNames;	// 0x328e304d
+ (BOOL)isEmptyHTMLElement:(id)element;	// 0x328259c1
- (id)init;	// 0x32aec0f1
- (id)initWithName:(id)name stringValue:(id)value;	// 0x32820609
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x328252e9
- (void)addAttribute:(id)attribute;	// 0x3281e43d
- (void)addChild:(id)child;	// 0x3281e6b1
- (int)attributeCount;	// 0x32825521
- (int)childrenCount;	// 0x3281efc1
- (id)closingTagString;	// 0x328a8eb9
- (id)contentString;	// 0x32aec121
- (id)copyWithZone:(NSZone *)zone;	// 0x32aec331
- (void)dealloc;	// 0x328aa299
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x328e9775
// converted property getter: - (id)objectValue;	// 0x32aec321
- (id)openingTagString;	// 0x328e2f21
// converted property setter: - (void)setObjectValue:(id)value;	// 0x32820675
- (id)stringValue;	// 0x32aec1e5
@end

