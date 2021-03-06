/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject {
	CPPDFImage *imageData;	// 104 = 0x68
	BOOL renderedBoundsComputed;	// 108 = 0x6c
}
@property(readonly, assign) CPPDFImage *imageData;	// G=0x312345b9; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x31234619
- (id)initWithPDFImage:(CPPDFImage *)pdfimage;	// 0x31234909
- (void)accept:(id)accept;	// 0x31234681
- (CGRect)bounds;	// 0x312345c9
// converted property getter: - (CPPDFImage *)imageData;	// 0x312345b9
- (BOOL)isVisible;	// 0x312345f1
- (void)recomputeRenderedBounds;	// 0x31234699
- (CGRect)renderedBounds;	// 0x3123484d
- (long)zOrder;	// 0x31234671
@end

