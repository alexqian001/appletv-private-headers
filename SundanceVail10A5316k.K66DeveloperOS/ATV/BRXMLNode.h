/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRXMLNode.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRXMLNode : XXUnknownSuperclass {
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x352829; S=0x352771; converted property
@property(retain) id textContent;	// G=0x35204d; S=0x3521dd; converted property
- (id)XMLString;	// 0x350649
- (BOOL)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function error:(id *)error;	// 0x351221
- (BOOL)appendChild:(id)child error:(id *)error;	// 0x350f31
// converted property getter: - (id)associatedObject;	// 0x352829
- (id)children;	// 0x350d6d
- (id)copyWithZone:(NSZone *)zone;	// 0x350059
- (id)description;	// 0x350229
- (id)getAttribute:(id)attribute;	// 0x35241d
- (BOOL)insertChild:(id)child after:(id)after error:(id *)error;	// 0x351629
- (BOOL)insertChild:(id)child before:(id)before error:(id *)error;	// 0x3515fd
- (BOOL)isEqual:(id)equal;	// 0x350429
- (id)name;	// 0x3516d9
- (id)nextSibling;	// 0x3518b5
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x351a25
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x350865
- (id)objectValue;	// 0x352255
- (id)ownerDocument;	// 0x35298d
- (id)parent;	// 0x351bc9
- (id)previousSibling;	// 0x351d39
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x351ea9
- (void)removeAttribute:(id)attribute;	// 0x3526dd
- (void)removeFromParent;	// 0x35169d
- (BOOL)replaceChild:(id)child with:(id)with error:(id *)error;	// 0x351655
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x352771
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x3525f1
// converted property setter: - (void)setTextContent:(id)content;	// 0x3521dd
- (id)stringValue;	// 0x352265
// converted property getter: - (id)textContent;	// 0x35204d
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x352be9
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x352d19
- (id)init;	// 0x352f35
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x352d9d
- (void)clearNode;	// 0x353145
- (void)dealloc;	// 0x352f7d
- (void)lockNode:(id)node;	// 0x35310d
@end
