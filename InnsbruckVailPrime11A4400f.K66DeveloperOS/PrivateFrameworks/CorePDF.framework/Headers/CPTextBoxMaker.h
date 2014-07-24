/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import </libobjc.A.h>

@class CPZone, CPBody;

@interface CPTextBoxMaker : NSObject {
	CPBody *bodyZone;	// 4 = 0x4
	CPZone *mainZone;	// 8 = 0x8
}
+ (void)boxLayoutsIn:(id)anIn;	// 0x305fcf0d
+ (void)promoteLayoutsIn:(id)anIn;	// 0x305fcd6d
- (void)boxLayout:(id)layout;	// 0x305fcdcd
- (void)boxLayoutsIn:(id)anIn;	// 0x305fceb1
- (BOOL)layoutIsSliced:(id)sliced;	// 0x305fcad9
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x305fc741
- (void)promoteLayoutsIn:(id)anIn;	// 0x305fcd11
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x305fcbc9
- (void)rotate:(id)rotate;	// 0x305fca89
- (void)rotateTextBox:(id)box;	// 0x305fc8e9
@end
