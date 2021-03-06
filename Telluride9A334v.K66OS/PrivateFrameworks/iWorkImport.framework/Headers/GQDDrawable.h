/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "GQWrapPointGenerator.h"

@class GQDAffineGeometry, GQDBezierPath;

__attribute__((visibility("hidden")))
@interface GQDDrawable : NSObject <GQWrapPointGenerator> {
@private
	GQDAffineGeometry *mGeometry;	// 4 = 0x4
	CFURLRef mUrl;	// 8 = 0x8
	char *mUid;	// 12 = 0xc
	GQDBezierPath *mWrapPath;	// 16 = 0x10
	GQDAffineGeometry *mWrapGeometry;	// 20 = 0x14
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *mInnerWrapPoints;	// 24 = 0x18
	BOOL mHasPagesOrder;	// 28 = 0x1c
	long mPagesOrder;	// 32 = 0x20
}
- (void)addWrapPoint:(id)point;	// 0x32bd0271
- (void)clearWrapPoints;	// 0x32bcff75
- (void)collectWrapPoints:(id)points forPath:(CGPathRef)path context:(FindLinesContext *)context;	// 0x32bd06c9
- (int)collectWrapPointsForState:(id)state graphicStyle:(id)style;	// 0x32bd0325
- (CGPathRef)createBezierPath;	// 0x32bcfee1
- (vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;	// 0x32bcff9d
- (void)dealloc;	// 0x32bd0469
- (id)geometry;	// 0x32bcfdf9
- (BOOL)hasPagesOrder;	// 0x32bcfe29
- (int)pagesOrder;	// 0x32bcfe39
- (const char *)uid;	// 0x32bcfe19
- (CFURLRef)url;	// 0x32bcfe09
- (CFStringRef)urlString;	// 0x32bd0449
- (const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>,GQUtility::NSObjectComparator<GQDWrapPoint>,std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > *)wrapPoints;	// 0x32bd010d
@end

