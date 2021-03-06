/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>

@class GQSDocument, GQHTableState, GQHXML;
@protocol GQHContext;

@interface GQHState : NSObject {
	GQHXML *mHtmlDoc;	// 4 = 0x4
	CGSize mScale;	// 8 = 0x8
	CFStringRef mStyleData;	// 16 = 0x10
	GQHTableState *mTableState;	// 20 = 0x14
	GQSDocument *mProcessorState;	// 24 = 0x18
	CFDictionaryRef mStyleIndexes;	// 28 = 0x1c
	CFDictionaryRef mStyleNameMap;	// 32 = 0x20
	CFArrayRef mImplicitStyles;	// 36 = 0x24
	int mColoredBackgroundLayerCount;	// 40 = 0x28
	int mMultiColumnedDepth;	// 44 = 0x2c
	CFArrayRef mGraphicPropertiesStack;	// 48 = 0x30
	int mParagraphCount;	// 52 = 0x34
	int mParagraphIndex;	// 56 = 0x38
	int mCachedCellStyleIndex;	// 60 = 0x3c
	CFDictionaryRef mCachedTableStyles;	// 64 = 0x40
	int mCachedTextStyleIndex;	// 68 = 0x44
	CFDictionaryRef mCachedTextStyles;	// 72 = 0x48
	int mInlineStyleIndex;	// 76 = 0x4c
	CFDictionaryRef mInlineStyles;	// 80 = 0x50
	CFDictionaryRef mColorStrings;	// 84 = 0x54
	id<GQHContext> mShapeContext;	// 88 = 0x58
	int mOutlineLevel;	// 92 = 0x5c
	int mOutlineStyleType;	// 96 = 0x60
	int mShapeIDCounter;	// 100 = 0x64
	unsigned mTextScale;	// 104 = 0x68
}
@property(assign) BOOL coloredBackground;	// G=0x33cd5e2d; S=0x33cd5d75; converted property
@property(assign) BOOL multiColumned;	// G=0x33cd5f59; S=0x33cd5ea1; converted property
@property(assign) int outlineLevel;	// G=0x33cd644d; S=0x33cd645d; converted property
@property(assign) int outlineStyleType;	// G=0x33cd6461; S=0x33cd6471; converted property
@property(assign) int paragraphCount;	// G=0x33cd6019; S=0x33cd6009; converted property
@property(assign) int paragraphIndex;	// G=0x33cd6039; S=0x33cd6029; converted property
@property(assign) CGSize scale;	// G=0x33cd5ab1; S=0x33cd5a9d; converted property
@property(assign) unsigned textScale;	// G=0x33cd64c1; S=0x33cd64d1; converted property
- (id)initWithState:(id)state;	// 0x33cd591d
- (id)initWithState:(id)state documentSize:(CGSize)size;	// 0x33cd5941
- (id)initWithState:(id)state needIndexFile:(BOOL)file documentSize:(CGSize)size;	// 0x33cd5659
- (id).cxx_construct;	// 0x33cd64fd
- (CFStringRef)addCacheForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x33cd6091
- (CFStringRef)addCachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span baseClassString:(CFStringRef)string cssCachedStyle:(id)style8;	// 0x33cd61dd
- (void)addCachedStyle:(CFStringRef)style;	// 0x33cd5bf5
- (void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;	// 0x33cd5ac9
- (void)addedDrawableWithBounds:(CGRect)bounds;	// 0x33cd5c91
- (BOOL)allowInlineWrap;	// 0x33cd64f9
- (CFStringRef)cachedClassStringForCellStyle:(id)cellStyle fillStyle:(id)style cellClass:(Class)aClass vectorStyles:(id *)styles groupLevel:(unsigned short)level hasFormula:(BOOL)formula;	// 0x33cd6049
- (CFStringRef)cachedClassStringForTextStyle:(id)textStyle implicitStyle:(id)style isColoredBackground:(BOOL)background outlineLevel:(int)level outlineType:(int)type isSpan:(BOOL)span;	// 0x33cd619d
- (CFStringRef)className:(id)name;	// 0x33cd5c15
// converted property getter: - (BOOL)coloredBackground;	// 0x33cd5e2d
- (CFStringRef)createStyleName:(id)name type:(const char *)type;	// 0x33cd5c95
- (CFStringRef)createUniqueShapeId:(const char *)anId;	// 0x33cd6475
- (CFStringRef)cssZOrderClassForDrawable:(id)drawable;	// 0x33cd5ccd
- (CFStringRef)cssZOrderClassForDrawableUid:(const char *)drawableUid;	// 0x33cd5cfd
- (void)dealloc;	// 0x33cd5965
- (BOOL)drawablesNeedCssZOrdering;	// 0x33cd5cc9
- (void)enterGraphicObject;	// 0x33cd5f71
- (BOOL)finishMainHtml;	// 0x33cd5c49
- (CFStringRef)getColorString:(id)string;	// 0x33cd62d9
- (id)htmlDoc;	// 0x33cd5a8d
- (id)implicitStyle;	// 0x33cd5d1d
- (int)indexForStyle:(const char *)style;	// 0x33cd6501
- (void)invalidateTextScale;	// 0x33cd64e1
- (void)leaveGraphicObject;	// 0x33cd5fb9
- (CFStringRef)makeInlineStyle:(CFStringRef)style;	// 0x33cd5b35
- (CFStringRef)makeInlineStyle:(CFStringRef)style inDocument:(id)document;	// 0x33cd5b55
// converted property getter: - (BOOL)multiColumned;	// 0x33cd5f59
- (BOOL)needAbsolutelyPositionedTables;	// 0x33cd64f5
// converted property getter: - (int)outlineLevel;	// 0x33cd644d
// converted property getter: - (int)outlineStyleType;	// 0x33cd6461
// converted property getter: - (int)paragraphCount;	// 0x33cd6019
// converted property getter: - (int)paragraphIndex;	// 0x33cd6039
- (void)popImplicitStyle;	// 0x33cd5d49
- (id)processorState;	// 0x33cd5c39
- (void)pushImplicitStyle:(id)style;	// 0x33cd5d09
// converted property getter: - (CGSize)scale;	// 0x33cd5ab1
// converted property setter: - (void)setColoredBackground:(BOOL)background;	// 0x33cd5d75
// converted property setter: - (void)setMultiColumned:(BOOL)columned;	// 0x33cd5ea1
// converted property setter: - (void)setOutlineLevel:(int)level;	// 0x33cd645d
// converted property setter: - (void)setOutlineStyleType:(int)type;	// 0x33cd6471
// converted property setter: - (void)setParagraphCount:(int)count;	// 0x33cd6009
// converted property setter: - (void)setParagraphIndex:(int)index;	// 0x33cd6029
// converted property setter: - (void)setScale:(CGSize)scale;	// 0x33cd5a9d
// converted property setter: - (void)setTextScale:(unsigned)scale;	// 0x33cd64d1
- (id)shapeContext;	// 0x33cd6439
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x33cd6415
- (id)tableState;	// 0x33cd5c29
// converted property getter: - (unsigned)textScale;	// 0x33cd64c1
- (BOOL)useOutline;	// 0x33cd6449
@end

