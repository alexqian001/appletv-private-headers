/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"

@class GQHXML;

@interface GQHLassoState : GQHState {
	GQHXML *mNavigation;	// 108 = 0x6c
	int mSheetCount;	// 112 = 0x70
	int mTableCount;	// 116 = 0x74
	CFStringRef mCssUri;	// 120 = 0x78
	CFStringRef mCurrentSheetFilename;	// 124 = 0x7c
	CFStringRef mCurrentSheetUri;	// 128 = 0x80
	CGPoint mMaxCanvasPoint;	// 132 = 0x84
	unsigned mCurrentDrawableZOrder;	// 140 = 0x8c
	unsigned mZOrderedDrawableCount;	// 144 = 0x90
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;	// 148 = 0x94
	CFArrayRef mSheetCssUriList;	// 152 = 0x98
	CFStringRef mSheetCssFilename;	// 156 = 0x9c
	CFStringRef mSheetOneCss;	// 160 = 0xa0
	CFStringRef mSheetOneLastCSS;	// 164 = 0xa4
	char *mFirstWorkspaceName;	// 168 = 0xa8
	bool mIsProgressiveMode;	// 172 = 0xac
	GQHXML *mIndex;	// 176 = 0xb0
	CFArrayRef mSheetFilenameList;	// 180 = 0xb4
	CFArrayRef mSheetUriList;	// 184 = 0xb8
	CFArrayRef mSheetCssLastUriList;	// 188 = 0xbc
	CFStringRef mSheetCssLastFilename;	// 192 = 0xc0
}
- (id)initWithState:(id)state;	// 0x33ccc631
- (id).cxx_construct;	// 0x33cce811
- (void)addCachedStyle:(CFStringRef)style;	// 0x33ccd62d
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x33ccd491
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x33ccd7cd
- (void)beginNewSheet:(const char *)sheet processorState:(id)state;	// 0x33ccca19
- (void)cacheAnchorForIndexPage:(char *)indexPage;	// 0x33ccd26d
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x33ccd825
- (unsigned)currentDrawableZOrder;	// 0x33ccd891
- (void)dealloc;	// 0x33ccc7d1
- (BOOL)drawablesNeedCssZOrdering;	// 0x33ccd821
- (int)endSheet;	// 0x33ccd2c1
- (BOOL)finishMainHtml;	// 0x33ccd681
- (BOOL)inProgressiveMode;	// 0x33cce6f1
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x33ccd53d
- (CGPoint)maxCanvasPoint;	// 0x33ccd7b5
- (void)writeAnchorInNavigationPage:(char *)navigationPage;	// 0x33ccd021
- (void)writeIndexPageWithDocumentSize:(CGSize)documentSize;	// 0x33ccd8a9
- (BOOL)writeIndexPageWithIFrame:(id)iframe;	// 0x33ccdbd1
- (void)writeNavigationPage:(id)page;	// 0x33cce371
- (CFStringRef)writeTabsJS;	// 0x33cce701
@end
