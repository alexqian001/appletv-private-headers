/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject {
	TSUProgressStage *m_currentStage;	// 4 = 0x4
	NSDate *m_lastReportTime;	// 8 = 0x8
	double m_lastProgressReport;	// 12 = 0xc
}
@property(readonly, retain) TSUProgressStage *currentStage;	// G=0x36ca8be1; converted property
+ (id)_singletonAlloc;	// 0x36ca7e39
+ (void)addProgressObserver:(id)observer selector:(SEL)selector;	// 0x36ca80a9
+ (void)advanceProgress:(double)progress;	// 0x36ca8615
+ (id)allocWithZone:(NSZone *)zone;	// 0x36ca7fed
+ (void)createStageWithSteps:(double)steps;	// 0x36ca82e1
+ (void)createStageWithSteps:(double)steps takingSteps:(double)steps2;	// 0x36ca8165
+ (double)currentPosition;	// 0x36ca8969
+ (void)endStage;	// 0x36ca84f5
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)nextSubStage;	// 0x36ca8415
+ (double)overallProgress;	// 0x36ca89b9
+ (void)removeProgressObserver:(id)observer;	// 0x36ca8109
+ (void)reset;	// 0x36ca8081
+ (void)setMessage:(id)message;	// 0x36ca88e5
+ (void)setPercentageProgressFromCPProgressContext:(double)cpprogressContext;	// 0x36ca87f5
+ (void)setProgress:(double)progress;	// 0x36ca8705
+ (id)sharedContext;	// 0x36ca7e69
- (id)init;	// 0x36ca8a09
- (void)_reset;	// 0x36ca8ac5
- (id)autorelease;	// 0x36ca8079
- (id)copyWithZone:(NSZone *)zone;	// 0x36ca807d
// converted property getter: - (id)currentStage;	// 0x36ca8be1
- (void)dealloc;	// 0x36ca8a4d
- (oneway void)release;	// 0x36ca8075
- (void)reportProgress:(double)progress overallProgress:(double)progress2;	// 0x36ca8bf1
- (id)retain;	// 0x36ca8069
- (unsigned)retainCount;	// 0x36ca806d
@end

