/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAVDrawable : NSObject {
}
+ (CGRect)readCoordBounds:(xmlNode *)bounds;	// 0x349a91b1
+ (id)readDrawableFromNode:(xmlNode *)node inNamespace:(id)aNamespace state:(id)state;	// 0x348f0f19
+ (id)readDrawablesFromParent:(xmlNode *)parent inNamespace:(id)aNamespace state:(id)state;	// 0x348f0e8d
+ (void)readFromDrawable:(xmlNode *)drawable toDrawable:(id)drawable2 state:(id)state;	// 0x348f1849
+ (xmlDoc *)vmlDocumentFromPart:(id)part;	// 0x3495a981
@end
