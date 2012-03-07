/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDRoot;

__attribute__((visibility("hidden")))
@interface GQDSStylesheet : NSObject {
@private
	GQDRoot *mRoot;	// 4 = 0x4
	GQDSStylesheet *mParent;	// 8 = 0x8
	CFDictionaryRef mIdentifiedStyles;	// 12 = 0xc
	CFArrayRef mStylesNeedingParentResolutionInParent;	// 16 = 0x10
	CFArrayRef mStylesNeedingParentResolution;	// 20 = 0x14
}
- (id)initWithRoot:(id)root;	// 0x3048e421
- (void)addStyle:(id)style needingParentResolution:(const char *)resolution resolveInParent:(BOOL)parent;	// 0x3048e2ad
- (void)addStyle:(id)style withOwnedIdentifier:(char *)ownedIdentifier;	// 0x3048e371
- (BOOL)addStyle:(id)style withOwnedXmlUid:(char *)ownedXmlUid;	// 0x3048e11d
- (void)dealloc;	// 0x3048e385
- (id)parent;	// 0x3048e0ed
- (void)resolveStyleParents;	// 0x3048e205
- (CFArrayRef)retainedArrayOfIdentifiedStyles;	// 0x3048e1c5
- (id)styleWithIdentifier:(const char *)identifier;	// 0x3048e329
- (id)styleWithXmlUid:(const char *)xmlUid;	// 0x3048e149
@end
