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
- (id).cxx_construct;	// 0x368bb439
- (CGPathRef)createBezierPath;	// 0x368bb159
- (BOOL)isRect;	// 0x368bb0f5
- (BOOL)isRectangular;	// 0x368bb0b9
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x368bb43d
- (double)scalar;	// 0x368bb119
- (CGSize)size;	// 0x368bb141
- (int)type;	// 0x368bb131
@end
