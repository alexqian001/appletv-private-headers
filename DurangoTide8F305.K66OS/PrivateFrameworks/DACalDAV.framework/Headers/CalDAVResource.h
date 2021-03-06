/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, CalDAVScheduleChangesProperty, NSData;

@interface CalDAVResource : NSObject {
	NSString *_filename;	// 4 = 0x4
	NSString *_etag;	// 8 = 0x8
	NSString *_scheduleTag;	// 12 = 0xc
	NSData *_data;	// 16 = 0x10
	CalDAVScheduleChangesProperty *_scheduleChanges;	// 20 = 0x14
}
@property(retain) NSData *data;	// G=0x3409ee21; S=0x3409eed5; @synthesize=_data
@property(retain) NSString *etag;	// G=0x3409edf1; S=0x3409ee7d; @synthesize=_etag
@property(retain) NSString *filename;	// G=0x3409edd9; S=0x3409ee51; @synthesize=_filename
@property(retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x3409ee39; S=0x3409ef01; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x3409ee09; S=0x3409eea9; @synthesize=_scheduleTag
// declared property getter: - (id)data;	// 0x3409ee21
- (void)dealloc;	// 0x3409ed49
// declared property getter: - (id)etag;	// 0x3409edf1
// declared property getter: - (id)filename;	// 0x3409edd9
// declared property getter: - (id)scheduleChanges;	// 0x3409ee39
// declared property getter: - (id)scheduleTag;	// 0x3409ee09
// declared property setter: - (void)setData:(id)data;	// 0x3409eed5
// declared property setter: - (void)setEtag:(id)etag;	// 0x3409ee7d
// declared property setter: - (void)setFilename:(id)filename;	// 0x3409ee51
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x3409ef01
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x3409eea9
@end

