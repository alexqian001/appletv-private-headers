/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x310851c9; converted property
- (id)initWithPage:(id)page;	// 0x310851d9
- (id)column:(CGPoint)column;	// 0x31085421
- (unsigned)columnsAt:(CGPoint)at;	// 0x31085479
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x31085231
- (void)dealloc;	// 0x31085811
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x31085871
- (void)findClickableObjects:(BOOL)objects;	// 0x310859bd
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x3108605d
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x31085e2d
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x31085f25
- (id)layoutArea:(CGPoint)area;	// 0x310854b1
- (id)objectAtPoint:(CGPoint)point;	// 0x3108528d
// converted property getter: - (id)page;	// 0x310851c9
- (id)paragraph:(CGPoint)paragraph;	// 0x3108567d
- (id)paragraphNear:(CGPoint)near;	// 0x31085519
- (id)textLine:(CGPoint)line;	// 0x310852c5
@end
