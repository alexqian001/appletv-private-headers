/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRXMLNode.h"
#import <NSObject.h> // Unknown library


@interface BRXMLNode : NSObject {
@private
	xmlNode *_xmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x3429e439; S=0x3429e419; converted property
@property(retain) id textContent;	// G=0x3429e1c9; S=0x3429e221; converted property
@property(assign, nonatomic) xmlNode *xmlNode;	// G=0x3429e459; S=0x3429e469; @synthesize=_xmlNode
- (id)XMLString;	// 0x3429db1d
- (void)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function;	// 0x3429de11
- (void)appendChild:(id)child;	// 0x3429ddd5
// converted property getter: - (id)associatedObject;	// 0x3429e439
- (id)children;	// 0x3429dd51
- (id)copyWithZone:(NSZone *)zone;	// 0x3429d99d
- (id)description;	// 0x3429d9fd
- (id)getAttribute:(id)attribute;	// 0x3429e305
- (void)insertChild:(id)child after:(id)after;	// 0x3429ded5
- (void)insertChild:(id)child before:(id)before;	// 0x3429dea9
- (BOOL)isEqual:(id)equal;	// 0x3429da95
- (id)name;	// 0x3429df75
- (id)nextSibling;	// 0x3429e019
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x3429e059
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x3429dbf9
- (id)objectValue;	// 0x3429e259
- (id)parent;	// 0x3429e0d1
- (id)previousSibling;	// 0x3429e111
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x3429e151
- (void)removeAttribute:(id)attribute;	// 0x3429e3e1
- (void)removeFromParent;	// 0x3429df49
- (void)replaceChild:(id)child with:(id)with;	// 0x3429df01
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x3429e419
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x3429e379
// converted property setter: - (void)setTextContent:(id)content;	// 0x3429e221
// declared property setter: - (void)setXmlNode:(xmlNode *)node;	// 0x3429e469
- (id)stringValue;	// 0x3429e285
// converted property getter: - (id)textContent;	// 0x3429e1c9
// declared property getter: - (xmlNode *)xmlNode;	// 0x3429e459
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x3429e58d
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x3429e699
- (id)init;	// 0x3429e851
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x3429e72d
- (void)dealloc;	// 0x3429e895
- (id)ownerDocument;	// 0x3429e989
@end

