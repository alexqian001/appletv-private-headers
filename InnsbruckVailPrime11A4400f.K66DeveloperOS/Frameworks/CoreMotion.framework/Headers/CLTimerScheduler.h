/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */


@class CLTimer;

@protocol CLTimerScheduler
@property(assign, nonatomic) __weak CLTimer *timer;
- (void)reflectNextFireTime:(double)time fireInterval:(double)interval;
// declared property setter: - (void)setTimer:(id)timer;
// declared property getter: - (id)timer;
@end
