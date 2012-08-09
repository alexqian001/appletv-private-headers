/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject {
	int _refCount;	// 4 = 0x4
	id<NSISVariableDelegate> _delegate;	// 8 = 0x8
}
@property(assign) id<NSISVariableDelegate> delegate;	// G=0x37451e49; S=0x37451e5d; @synthesize=_delegate
@property(readonly, assign) BOOL shouldBeMinimized;	// G=0x37451c25; 
@property(readonly, assign) int valueRestriction;	// G=0x37451bc1; 
+ (id)variableMarkingConstraint:(id)constraint valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x374518e5
+ (id)variableWithDelegate:(id)delegate valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x374517b1
+ (id)variableWithName:(id)name valueRestriction:(int)restriction shouldBeMinimized:(BOOL)minimized;	// 0x37451a19
- (BOOL)_isDeallocating;	// 0x37451e1d
- (BOOL)_tryRetain;	// 0x37451dbd
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;	// 0x37451b39
// declared property getter: - (id)delegate;	// 0x37451e49
- (id)description;	// 0x37451ab5
- (id)markedConstraint;	// 0x37451c89
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;	// 0x37451b69
- (oneway void)release;	// 0x37451d2d
- (id)retain;	// 0x37451ced
- (unsigned)retainCount;	// 0x37451da9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37451e5d
- (BOOL)shouldBeIntegral;	// 0x37451b0d
// declared property getter: - (BOOL)shouldBeMinimized;	// 0x37451c25
- (BOOL)valueIsUserVisible;	// 0x37451b95
// declared property getter: - (int)valueRestriction;	// 0x37451bc1
@end
