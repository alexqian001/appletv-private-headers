/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x310241ad; S=0x31024181; 
// declared property getter: - (id)delegate;	// 0x310241ad
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x3102438d
- (BOOL)isEqual:(id)equal;	// 0x31024205
- (void)main;	// 0x31025169
- (id)retainedDelegate;	// 0x310241d9
- (BOOL)rollBaselineWithError:(id *)error;	// 0x31024875
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31024181
@end
