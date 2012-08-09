/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDPath.h"
#import "iWorkImport-Structs.h"


@interface GQDScalarPath : GQDPath {
	int mType;	// 8 = 0x8
	double mScalar;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x3507e859
- (CGPathRef)createBezierPath;	// 0x3507e579
- (BOOL)isRect;	// 0x3507e515
- (BOOL)isRectangular;	// 0x3507e4d9
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x3507e85d
- (double)scalar;	// 0x3507e539
- (CGSize)size;	// 0x3507e561
- (int)type;	// 0x3507e551
@end
