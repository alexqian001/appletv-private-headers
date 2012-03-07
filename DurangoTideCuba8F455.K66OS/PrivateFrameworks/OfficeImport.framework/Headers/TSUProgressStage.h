/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressStage : NSObject {
@private
	double m_currentPosition;	// 4 = 0x4
	double m_totalSteps;	// 12 = 0xc
	double m_stepsInParent;	// 20 = 0x14
	double m_startInParent;	// 28 = 0x1c
	double m_nextSubStageParentSize;	// 36 = 0x24
	TSUProgressStage *m_parentStage;	// 44 = 0x2c
	TSUProgressContext *m_context;	// 48 = 0x30
}
@property(readonly, assign) double currentPosition;	// G=0x32d95ff9; converted property
@property(assign) double nextSubStageParentSize;	// G=0x32d96009; S=0x32d96019; converted property
@property(readonly, retain) TSUProgressStage *parentStage;	// G=0x32d95fe9; converted property
- (id)initRootStageInContext:(id)context;	// 0x32d9602d
- (id)initWithSteps:(double)steps takingSteps:(double)steps2 inContext:(id)context;	// 0x32d962bd
- (void)advanceProgress:(double)progress;	// 0x32d96241
// converted property getter: - (double)currentPosition;	// 0x32d95ff9
- (void)dealloc;	// 0x32d96271
- (id)description;	// 0x32d960e5
- (void)end;	// 0x32d961dd
// converted property getter: - (double)nextSubStageParentSize;	// 0x32d96009
- (double)overallProgress;	// 0x32d96189
// converted property getter: - (id)parentStage;	// 0x32d95fe9
// converted property setter: - (void)setNextSubStageParentSize:(double)size;	// 0x32d96019
- (void)setProgress:(double)progress;	// 0x32d967c1
- (void)setProgressPercentage:(double)percentage;	// 0x32d96201
@end
