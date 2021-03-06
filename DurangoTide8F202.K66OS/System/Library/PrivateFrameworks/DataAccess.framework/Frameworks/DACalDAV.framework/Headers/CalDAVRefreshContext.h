/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CalDAVRefreshContext : NSObject {
	BOOL _isForced;	// 4 = 0x4
	BOOL _isCalendarsOnly;	// 5 = 0x5
	BOOL _didDownloadEvents;	// 6 = 0x6
	BOOL _didSaveDatabase;	// 7 = 0x7
	int _numDownloadedElements;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL didDownloadEvents;	// G=0x32d0824d; S=0x32d0825d; @synthesize=_didDownloadEvents
@property(assign, nonatomic) BOOL didSaveDatabase;	// G=0x32d0822d; S=0x32d0823d; @synthesize=_didSaveDatabase
@property(assign, nonatomic) BOOL isCalendarsOnly;	// G=0x32d0826d; S=0x32d0827d; @synthesize=_isCalendarsOnly
@property(assign, nonatomic) BOOL isForced;	// G=0x32d0828d; S=0x32d0829d; @synthesize=_isForced
@property(assign, nonatomic) int numDownloadedElements;	// G=0x32d0820d; S=0x32d0821d; @synthesize=_numDownloadedElements
+ (id)defaultContext;	// 0x32d082ad
// declared property getter: - (BOOL)didDownloadEvents;	// 0x32d0824d
// declared property getter: - (BOOL)didSaveDatabase;	// 0x32d0822d
// declared property getter: - (BOOL)isCalendarsOnly;	// 0x32d0826d
// declared property getter: - (BOOL)isForced;	// 0x32d0828d
// declared property getter: - (int)numDownloadedElements;	// 0x32d0820d
// declared property setter: - (void)setDidDownloadEvents:(BOOL)downloadEvents;	// 0x32d0825d
// declared property setter: - (void)setDidSaveDatabase:(BOOL)saveDatabase;	// 0x32d0823d
// declared property setter: - (void)setIsCalendarsOnly:(BOOL)only;	// 0x32d0827d
// declared property setter: - (void)setIsForced:(BOOL)forced;	// 0x32d0829d
// declared property setter: - (void)setNumDownloadedElements:(int)elements;	// 0x32d0821d
@end

