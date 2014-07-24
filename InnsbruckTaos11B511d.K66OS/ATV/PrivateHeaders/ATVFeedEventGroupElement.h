/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVXMLElement, NSString, NSDate, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedEventGroupElement : ATVFeedRootElement {
	BOOL _beginPlaybackAtStartDate;	// 4 = 0x4
	BOOL _showChapterMarkers;	// 5 = 0x5
	BOOL _showDescriptionOnChapterSkip;	// 6 = 0x6
	NSString *_title;	// 8 = 0x8
	int _refreshIntervalSec;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSArray *_events;	// 20 = 0x14
	ATVXMLElement *_xml;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x13c775; S=0x13c785; @synthesize=_beginPlaybackAtStartDate
@property(retain, nonatomic) NSArray *events;	// G=0x13c795; S=0x13c7a5; @synthesize=_events
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x13c71d; S=0x13c72d; @synthesize=_refreshIntervalSec
@property(assign, nonatomic) BOOL showChapterMarkers;	// G=0x13c7cd; S=0x13c7dd; @synthesize=_showChapterMarkers
@property(assign, nonatomic) BOOL showDescriptionOnChapterSkip;	// G=0x13c7ed; S=0x13c7fd; @synthesize=_showDescriptionOnChapterSkip
@property(retain, nonatomic) NSDate *startDate;	// G=0x13c73d; S=0x13c74d; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x13c6f9; S=0x13c70d; @synthesize=_title
@property(readonly, assign, nonatomic) ATVXMLElement *xml;	// G=0x13c80d; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13c299
- (void).cxx_destruct;	// 0x13c81d
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x13c775
// declared property getter: - (id)events;	// 0x13c795
// declared property getter: - (int)refreshIntervalSec;	// 0x13c71d
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x13c785
// declared property setter: - (void)setEvents:(id)events;	// 0x13c7a5
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x13c72d
// declared property setter: - (void)setShowChapterMarkers:(BOOL)markers;	// 0x13c7dd
// declared property setter: - (void)setShowDescriptionOnChapterSkip:(BOOL)skip;	// 0x13c7fd
// declared property setter: - (void)setStartDate:(id)date;	// 0x13c74d
// declared property setter: - (void)setTitle:(id)title;	// 0x13c70d
// declared property getter: - (BOOL)showChapterMarkers;	// 0x13c7cd
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x13c7ed
// declared property getter: - (id)startDate;	// 0x13c73d
// declared property getter: - (id)title;	// 0x13c6f9
// declared property getter: - (id)xml;	// 0x13c80d
@end
