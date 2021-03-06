/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASParsingLeafNode.h"
#import <NSString.h> // Unknown library


@interface NSString (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x343d1291
+ (BOOL)expectsContent;	// 0x343d173d
+ (BOOL)frontingBasicTypes;	// 0x343d138d
+ (BOOL)notifyOfUnknownTokens;	// 0x343d13e1
+ (BOOL)parsingLeafNode;	// 0x343d12e5
+ (BOOL)parsingWithSubItems;	// 0x343d1339
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x343d1435
- (int)parsingState;	// 0x343d1739
@end

@interface NSString (ConformToMS)
- (id)stringFormattedForMSVersioning;	// 0x3442e011
@end

@interface NSString (LineEndingConversion)
- (id)stringByConvertingLineEndingsTo:(id)to;	// 0x34430025
@end

@interface NSString (InviteBodyPrettification)
- (id)stringByTrimmingNotesJunk;	// 0x34430069
@end

