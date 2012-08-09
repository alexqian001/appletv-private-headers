/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILocalNotification.h"
#import "UIKit-Structs.h"

@class NSString, NSDate, NSCalendar, NSData, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	int totalRepeatCount;	// 20 = 0x14
	int remainingRepeatCount;	// 24 = 0x18
	NSString *alertBody;	// 28 = 0x1c
	BOOL hasAction;	// 32 = 0x20
	NSString *alertAction;	// 36 = 0x24
	NSString *alertLaunchImage;	// 40 = 0x28
	NSString *soundName;	// 44 = 0x2c
	int applicationIconBadgeNumber;	// 48 = 0x30
	NSData *userInfoData;	// 52 = 0x34
	BOOL hideAlertTitle;	// 56 = 0x38
	BOOL allowSnooze;	// 57 = 0x39
	int soundType;	// 60 = 0x3c
	BOOL interruptAudioAndLockDevice;	// 64 = 0x40
	BOOL resumeApplicationInBackground;	// 65 = 0x41
	BOOL fireNotificationsWhenAppRunning;	// 66 = 0x42
	BOOL showAlarmStatusBarItem;	// 67 = 0x43
	NSString *customLockSliderLabel;	// 68 = 0x44
	NSString *firedNotificationName;	// 72 = 0x48
	NSString *snoozedNotificationName;	// 76 = 0x4c
	BOOL isSystemAlert;	// 80 = 0x50
}
@property(retain) NSString *alertAction;	// G=0x3055c565; S=0x3055c579; converted property
@property(retain) NSString *alertBody;	// G=0x3055c521; S=0x3055c535; converted property
@property(retain) NSString *alertLaunchImage;	// G=0x3055c589; S=0x3055c59d; converted property
@property(assign) BOOL allowSnooze;	// G=0x3055c641; S=0x3055c651; converted property
@property(assign) int applicationIconBadgeNumber;	// G=0x3055c5d1; S=0x3055c5e1; converted property
@property(retain) NSString *customLockSliderLabel;	// G=0x3055c6f1; S=0x3055c705; converted property
@property(retain) NSDate *fireDate;	// G=0x3055c495; S=0x3055c4a9; converted property
@property(assign) BOOL fireNotificationsWhenAppRunning;	// G=0x3055c6b1; S=0x3055c6c1; converted property
@property(retain) NSString *firedNotificationName;	// G=0x3055c715; S=0x3055c729; converted property
@property(assign) BOOL hasAction;	// G=0x3055c545; S=0x3055c555; converted property
@property(assign) BOOL hideAlertTitle;	// G=0x3055c621; S=0x3055c631; converted property
@property(assign) BOOL interruptAudioAndLockDevice;	// G=0x3055c671; S=0x3055c681; converted property
@property(assign) BOOL isSystemAlert;	// G=0x3055c75d; S=0x3055c76d; converted property
@property(assign) int remainingRepeatCount;	// G=0x3055c601; S=0x3055c611; converted property
@property(retain) NSCalendar *repeatCalendar;	// G=0x3055c4fd; S=0x3055c511; converted property
@property(assign) unsigned repeatInterval;	// G=0x3055c4dd; S=0x3055c4ed; converted property
@property(assign) BOOL resumeApplicationInBackground;	// G=0x3055c691; S=0x3055c6a1; converted property
@property(assign) BOOL showAlarmStatusBarItem;	// G=0x3055c6d1; S=0x3055c6e1; converted property
@property(retain) NSString *snoozedNotificationName;	// G=0x3055c739; S=0x3055c74d; converted property
@property(retain) NSString *soundName;	// G=0x3055c5ad; S=0x3055c5c1; converted property
@property(assign) int soundType;	// G=0x3055c661; S=0x3055a159; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x3055c4b9; S=0x3055c4cd; converted property
@property(assign) int totalRepeatCount;	// G=0x3055c5f1; S=0x3055a171; converted property
@property(retain) id userInfo;	// G=0x3055b625; S=0x3055b4e1; converted property
- (id)init;	// 0x3055a191
- (id)initWithCoder:(id)coder;	// 0x3055a301
- (void)_setUserInfoData:(id)data;	// 0x3055b4a5
// converted property getter: - (id)alertAction;	// 0x3055c565
// converted property getter: - (id)alertBody;	// 0x3055c521
// converted property getter: - (id)alertLaunchImage;	// 0x3055c589
// converted property getter: - (BOOL)allowSnooze;	// 0x3055c641
// converted property getter: - (int)applicationIconBadgeNumber;	// 0x3055c5d1
- (void)clearNonSystemProperties;	// 0x3055c3d5
- (int)compareFireDates:(id)dates;	// 0x3055b419
- (id)copyWithZone:(NSZone *)zone;	// 0x3055ab61
// converted property getter: - (id)customLockSliderLabel;	// 0x3055c6f1
- (void)dealloc;	// 0x3055a1e9
- (id)description;	// 0x3055b6a5
- (void)encodeWithCoder:(id)coder;	// 0x3055a825
// converted property getter: - (id)fireDate;	// 0x3055c495
// converted property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x3055c6b1
// converted property getter: - (id)firedNotificationName;	// 0x3055c715
// converted property getter: - (BOOL)hasAction;	// 0x3055c545
- (unsigned)hash;	// 0x3055b3c9
// converted property getter: - (BOOL)hideAlertTitle;	// 0x3055c621
// converted property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x3055c671
- (BOOL)isEqual:(id)equal;	// 0x3055aea1
// converted property getter: - (BOOL)isSystemAlert;	// 0x3055c75d
- (BOOL)isValid;	// 0x3055c369
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x3055baa1
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x3055b9e1
// converted property getter: - (int)remainingRepeatCount;	// 0x3055c601
// converted property getter: - (id)repeatCalendar;	// 0x3055c4fd
// converted property getter: - (unsigned)repeatInterval;	// 0x3055c4dd
// converted property getter: - (BOOL)resumeApplicationInBackground;	// 0x3055c691
// converted property setter: - (void)setAlertAction:(id)action;	// 0x3055c579
// converted property setter: - (void)setAlertBody:(id)body;	// 0x3055c535
// converted property setter: - (void)setAlertLaunchImage:(id)image;	// 0x3055c59d
// converted property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x3055c651
// converted property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3055c5e1
// converted property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x3055c705
// converted property setter: - (void)setFireDate:(id)date;	// 0x3055c4a9
// converted property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x3055c6c1
// converted property setter: - (void)setFiredNotificationName:(id)name;	// 0x3055c729
// converted property setter: - (void)setHasAction:(BOOL)action;	// 0x3055c555
// converted property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x3055c631
// converted property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x3055c681
// converted property setter: - (void)setIsSystemAlert:(BOOL)alert;	// 0x3055c76d
// converted property setter: - (void)setRemainingRepeatCount:(int)count;	// 0x3055c611
// converted property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x3055c511
// converted property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x3055c4ed
// converted property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x3055c6a1
// converted property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x3055c6e1
// converted property setter: - (void)setSnoozedNotificationName:(id)name;	// 0x3055c74d
// converted property setter: - (void)setSoundName:(id)name;	// 0x3055c5c1
// converted property setter: - (void)setSoundType:(int)type;	// 0x3055a159
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3055c4cd
// converted property setter: - (void)setTotalRepeatCount:(int)count;	// 0x3055a171
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3055b4e1
// converted property getter: - (BOOL)showAlarmStatusBarItem;	// 0x3055c6d1
// converted property getter: - (id)snoozedNotificationName;	// 0x3055c739
// converted property getter: - (id)soundName;	// 0x3055c5ad
// converted property getter: - (int)soundType;	// 0x3055c661
// converted property getter: - (id)timeZone;	// 0x3055c4b9
// converted property getter: - (int)totalRepeatCount;	// 0x3055c5f1
// converted property getter: - (id)userInfo;	// 0x3055b625
@end
