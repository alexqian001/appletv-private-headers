/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import "GQDPath.h"


@interface GQDBezierPath : GQDPath <GQDNameMappable> {
	CGPathRef mPath;	// 8 = 0x8
	char *mPathStr;	// 12 = 0xc
	BOOL mHasVFlip;	// 16 = 0x10
	BOOL mVFlip;	// 17 = 0x11
	BOOL mHasHFlip;	// 18 = 0x12
	BOOL mHFlip;	// 19 = 0x13
}
+ (CFStringRef)createCFStringFromPath:(CGPathRef)path;	// 0x35806311
+ (CGPathRef)createPathFromCString:(const char *)cstring;	// 0x35806481
+ (const StateSpec *)stateForReading;	// 0x35805ef1
- (id)initWithPathString:(const char *)pathString;	// 0x35805efd
- (CGPathRef)createBezierPath;	// 0x358062b5
- (void)dealloc;	// 0x35805f79
- (BOOL)hasHorizontalFlip;	// 0x358062e1
- (BOOL)hasVerticalFlip;	// 0x358062d1
- (BOOL)horizontalFlip;	// 0x35806301
- (BOOL)isRectangular;	// 0x35805fe1
- (CGPathRef)path;	// 0x35806245
- (char *)pathStr;	// 0x358062a5
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x3580640d
- (BOOL)verticalFlip;	// 0x358062f1
@end
