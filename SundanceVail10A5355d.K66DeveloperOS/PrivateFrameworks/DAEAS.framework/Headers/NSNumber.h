/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSNumber.h> // Unknown library


@interface NSNumber (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x34b4e54d
+ (BOOL)expectsContent;	// 0x34b4e791
+ (BOOL)frontingBasicTypes;	// 0x34b4e649
+ (BOOL)notifyOfUnknownTokens;	// 0x34b4e69d
+ (BOOL)parsingLeafNode;	// 0x34b4e5a1
+ (BOOL)parsingWithSubItems;	// 0x34b4e5f5
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x34b4e6f1
- (int)parsingState;	// 0x34b4e78d
@end
