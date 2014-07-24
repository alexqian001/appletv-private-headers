/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>


@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {
	BOOL _getScheduleTags;	// 184 = 0xb8
	BOOL _getScheduleChanges;	// 185 = 0xb9
}
@property(assign) BOOL getScheduleChanges;	// G=0x30269a59; S=0x30269a71; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x30269a29; S=0x30269a41; @synthesize=_getScheduleTags
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes;	// 0x30269779
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes appSpecificCalendarItemClass:(Class)aClass;	// 0x30269675
- (id)copyAdditionalPropElements;	// 0x302697c5
// declared property getter: - (BOOL)getScheduleChanges;	// 0x30269a59
// declared property getter: - (BOOL)getScheduleTags;	// 0x30269a29
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x3026992d
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x30269a71
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x30269a41
@end
