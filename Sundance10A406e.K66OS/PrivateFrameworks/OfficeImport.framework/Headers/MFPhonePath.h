/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPath.h"


@interface MFPhonePath : MFPath {
	CGPathRef m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x3514e6f5; converted property
- (id)init;	// 0x34f23479
- (id)initWithPath:(CGPathRef)path state:(int)state;	// 0x34facb65
- (int)abort;	// 0x3514e709
- (void)appendBezierPath:(CGPathRef)path dc:(id)dc;	// 0x34ffdd91
- (int)begin;	// 0x34ffdaf5
- (int)closeFigure;	// 0x34ffe5cd
- (id)copyWithZone:(NSZone *)zone;	// 0x34facafd
- (CGPoint)currentPoint;	// 0x34ffe605
- (void)dealloc;	// 0x34f27875
- (int)end;	// 0x34ffe695
- (int)fill:(id)fill;	// 0x34ffeb7d
- (int)flatten;	// 0x3514e741
- (CGPathRef)getBezierPath;	// 0x34ffe885
- (BOOL)isOpen;	// 0x34f25db5
// converted property getter: - (int)state;	// 0x3514e6f5
- (int)stroke:(id)stroke;	// 0x34ffeff5
- (int)widen:(id)widen;	// 0x3514e759
@end

